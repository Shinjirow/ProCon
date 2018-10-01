//#include "bits/stdc++.h"
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
#include <numeric>
#include <complex>
#include <bitset>
#include <functional>
#include <stack>
#include <regex>
#include <tuple>
#include <iomanip>

#define int long long
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
#define showp(n) cerr<<n.fs<<", "<<n.sc<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", "}cerr<<endl

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

inline void io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}
inline int  in(){int n;scanf("%lld",&n);return n;}
inline void out(int n){printf("%lld\n",n);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

const int FIELD=2*1000;

char grid[FIELD+10][FIELD+10];

int n,m;

int dx[]={1,1,0,-1,-1,-1,0,1},dy[]={0,-1,-1,-1,0,1,1,1};

int ans=0;

void dfs(int x, int y, bool turned){
    
}

signed main(){
    io();
    fill(grid[0],grid[FIELD+5],'#');
    cin>>n>>m;
    rep(i,m){
        rep(j,n){
            cin>>grid[j+1][i+1];
        }
    }
    REP(y,1,m+1){
        REP(x,1,n+1){
            if(grid[x][y]=='.'){
                dfs(x,y,false);
            }
        }
    }

    out(ans);

    return 0;
}
