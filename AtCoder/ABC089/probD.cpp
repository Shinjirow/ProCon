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

const int INF = ~(1 << 31);

int fld[301][301];
int h, w, d;
vector<pint> vec(90001);
vi c(90001);

int move(int start, int src, int dst, int cost, pint plc){
    if(src == dst){ return cost; }
    int to = src + d;
    pint place = vec[to];
    if(c[src] == 0){
        c[src] = abs(plc.first - place.first) + abs(plc.second - place.second);
    }
    cost += c[src];
    c[start] += c[src];
    //cost += abs(plc.first - place.first);
    //cost += abs(plc.second - place.second);
    //show(cost);
    
    return move(start, to, dst, cost, place);
}

void solve(int l, int r){
    pint place = vec[l];

    int cost = move(l, l, r, 0, place);
    //cout << cost << endl;
    printf("%d\n", cost);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> h >> w >> d;
    int n;
    rep(i, h){
        rep(j, w){
            scanf("%d", &fld[i][j]);
            vec[fld[i][j]] = mp(i, j);
        }
    }
    int q;
    cin >> q;
    int l, r;
    rep(i, q){
        //cin >> l[i] >> r[i];
        scanf("%d %d", &l, &r);
        solve(l, r);
    }

    return 0;
}