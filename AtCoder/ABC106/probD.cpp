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
template<typename T> inline void in(T &e){cin>>e;}
template<typename T> inline void out(T e){cout<<e<<endl;}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

const int MAX_N=500;
int n,m,q;
int ary[MAX_N+1][MAX_N+1];

int l,r;

signed main(){
    io();
    cin>>n>>m>>q;
    rep(i,m) {
        scanf("%lld %lld",&l,&r);
        ary[l][r]++;
    }

    REP(i,1,n+1){
        REP(j,1,n+1){
            ary[i][j]+=ary[i][j-1];
        }
    }
    REP(i,1,n+1){
        REP(j,1,n+1){
            ary[i][j]+=ary[i-1][j];
        }
    }

    while(q--){
        scanf("%lld %lld",&l,&r);
        out(ary[r][r]-ary[r][l-1]-ary[l-1][r]+ary[l-1][l-1]);
    }
    
    return 0;
}
