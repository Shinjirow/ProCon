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
#define REP(i,l,r) REPEAT(i,l,r,true) // [l, r)
#define rep(i,n) REP(i,0,n)           // [0, n)
#define REPEAT(i,l,r,condition) for(int i=(condition)?l:r-1;(condition)?i<r:i>=l;(condition)?++i:--i) // false<-[l, r)->true
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define fs first
#define sc second
#define show(...) cerr<<#__VA_ARGS__<<" = ";_DEBUG(__VA_ARGS__)
#define showlr(n,l,r) cerr<<#n<<" = ";for(int i=l;i<r;i++){cerr<<n[i]<<", ";}cerr<<endl // [l, r)

#define YN(condition) puts((condition)?"YES":"NO")
#define Yn(condition) puts((condition)?"Yes":"No")
#define yn(condition) puts((condition)?"yes":"no")
#define YES puts("YES")
#define Yes puts("Yes")
#define yes puts("yes")
#define NO  puts("NO")
#define No  puts("No")
#define no  puts("no")

#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

struct io{io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}}io;

template<class T> istream& operator >>(istream &is, vector<T> &v){for(T &e:v)is>>e;return is;}
template<class T> ostream& operator <<(ostream &os, vector<T> v){os<<"{";for(T &e:v)os<<e<<(v.size()-(int)(&e-&v[0])>1?", ":"");os<<"}";return os;}

void _DEBUG(){}
template<typename H,typename... T> void _DEBUG(H a,T...b){cerr<<a<<(sizeof...(b)?",":"\n");_DEBUG(b...);}

inline void in(){}
template<typename H,typename... T>void in(H &a, T&... b){cin>>a;in(b...);}
inline void out(){}
template<typename H,typename... T> void out(H a, T... b){cout<<a<<(sizeof...(b)?" ":"\n");out(b...);}

template<class T> void resz(int n,T& v){v.resize(n);}
template<class H,class... T> void resz(int n,H& a,T&... b){a.resize(n);resz(n,b...);}

template<typename V,typename H> void resize(vector<V>& v,const H a){v.resize(a);}
template<typename V,typename H,typename... T> void resize(vector<V>& v,const H& a,const T... b){v.resize(a);for(auto &v:v) resize(v,b...);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int L;
vi A;

vector<vi> dp;

vi d={0,1,2,1,0};

signed main(){

    in(L);
    resz(L,A);
    in(A);
    resize(dp,L+1,5);
    rep(i,5) dp[0][i]=0;
    vi costs(3);
    REP(i,1,L+1){
        // int cost0=A[i];
        // int costEven=A[i]&1;
        // int costOdd=A[i]%2==0;
        costs[0]=A[i-1];
        costs[1]=(A[i-1]==0)?2:A[i-1]&1;
        costs[2]=A[i-1]%2==0;
        // show(costs);
        rep(j,5){
            int mn=INF;
            rep(k,j+1){
                mn=min(mn,dp[i-1][k]);
            }
            dp[i][j]=mn+costs[d[j]];
        }
    }
    int ans=INF;
    rep(i,5){
        ans=min(ans,dp[L][i]);
    }
    out(ans);

    return 0;
}
