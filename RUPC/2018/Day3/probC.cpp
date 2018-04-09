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
#include <deque>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = (1 << 30);

int dx[4] = {1, 0, -1, 0},dy[4] = {0, 1, 0, -1};
int nx[4] = {1, 1, -1, -1}, ny[4] = {1, -1, -1, 1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    char s, g;
    cin >> H >> W >> s >> g;
    char field[H][W];
    bool already[H][W];
    int cost[H][W];
    
    deque<pint> deq;
    memset(already, false, sizeof(already));
    rep(i, H){
        rep(j, W) cost[i][j] = INF;
    }
    rep(i, H){
        rep(j, W){
            cin >> field[i][j];
            if(field[i][j] == s){
                deq.pb(mp(i, j));
                cost[i][j] = 0;
                already[i][j] = true;
            }
        }
    }

    rep(i, H){
        rep(j, W){
            if(isupper(field[i][j])){
                rep(k, 4){
                    field[i + nx[k]][j + ny[k]] = '.';
                }
            }
        }
    }

    pint cur;

    while(!deq.empty()){
        cur = deq.front();
        deq.pop_front();
        //cerr << field[cur.fs][cur.sc] << endl;
        //show(cost[cur.fs][cur.sc]);
        if(g == field[cur.fs][cur.sc]) break;
        rep(i, 4){
            pint next = mp(cur.fs + dx[i], cur.sc + dy[i]);
            if(next.fs < 0 || next.fs >= H || next.sc < 0 || next.sc >= W) continue;
            if(!already[next.fs][next.sc] && field[next.fs][next.sc] != '.'){
                already[next.fs][next.sc] = true;
                if(isupper(field[next.fs][next.sc])){
                    deq.push_back(next);
                    cost[next.fs][next.sc] = cost[cur.fs][cur.sc] + 1;
                }else{
                    deq.push_front(next);
                    cost[next.fs][next.sc] = cost[cur.fs][cur.sc];
                }
            }
        }
    }

    cout << cost[cur.fs][cur.sc] << endl;

    return 0;
}