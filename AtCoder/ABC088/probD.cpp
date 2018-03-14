#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define show(n) cerr<<#n<<" = "<<n<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = (1 << 30);

vi grid[51];

vi dis[51];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs(int h, int w){
    pint s = mp(0, 0);
    pint g = mp(h - 1, w - 1);
    queue<pint> queue;
    rep(i, h){rep(j, w){dis[i].pb(INF);}}

    queue.push(s);
    dis[s.fs][s.sc] = 0;

    while(queue.size()){
        pint p = queue.front(); queue.pop();
        if(p.fs == g.fs && p.sc == g.sc){ break; }

        rep(i, 4){
            pint next = mp(p.fs + dx[i], p.sc + dy[i]);

            if(0 <= next.fs && next.fs < h && 0 <= next.sc && next.sc < w && grid[next.fs][next.sc] != 1 && dis[next.fs][next.sc] == INF){
                queue.push(next);
                dis[next.fs][next.sc] = dis[p.fs][p.sc] + 1;
            }
        }
    }
    return dis[g.fs][g.sc];
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;
    char c;
    int masu = 0;
    rep(i, h){
        rep(j, w){
            cin >> c;
            if(c == '.'){grid[i].pb(0);masu++;}
            else{grid[i].pb(1);}
        }
    }
    int n = bfs(h, w);
    if(n == INF){ cout << -1 << endl; }
    else{ cout << masu - n - 1 << endl; }

    return 0;
}