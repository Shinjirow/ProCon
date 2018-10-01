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
const int max_n = 1010;

int n,m;
vi G[max_n];
int color[max_n];

void init(){
    rep(i,max_n){
        G[i].clear();
        color[i]=0;
    }
}

void input(){
    int a,b;
    rep(i,m){
        cin>>a>>b;
        a--;b--;
        G[a].pb(b);
        G[b].pb(a);
    }
}

bool dfs(int v,int c){
    color[v]=c;
    rep(i,G[v].size()){
        if(color[G[v][i]]==c) return false;
        if(color[G[v][i]]==0 && !dfs(G[v][i],-c)) return false;
    }

    return true;
}

void solve(){
    init();
    input();

    rep(i,n){
        if(color[i]==0){
            if(!dfs(i,1)){
                out(0);
                return;
            }
        }
    }
    
    int a=0,b=0;
    vi ans;
    rep(i,n){
        if(color[i]==1) a++;
        else b++;
    }
    //show(a);show(b);
    if(!(a&1)) ans.pb(a/2);
    if(!(b&1) && a!=b) ans.pb(b/2);

    sort(all(ans));
    out(ans.size());
    for(auto e : ans){
        out(e);
    }
}

signed main(){
    io();
    while(cin>>n>>m, n){
        solve();
    }

    return 0;
}
