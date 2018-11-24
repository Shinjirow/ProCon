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

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

inline void io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}

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

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int n,k;
vi vec;
vi bit(63);
vi ls;

signed main(){
    io();

    in(n,k);
    vec.pb(0);
    rep(i,n){
        int a;
        in(a);
        vec.pb(a);
        vec[i+1]+=vec[i];
    }
    // show(vec);
    rep(l,n+1){
        REP(r,l+1,n+1){
            ls.pb(vec[r]-vec[l]);
        }
    }
    show(ls);
    int ans=0;
    REPEAT(i,0,63,false){
        vi tmp;
        int cmp=ans;
        cmp|=1LL<<i;
        show(cmp);
        rep(j,ls.size()){
            if((cmp&ls[j])==cmp) tmp.pb(ls[j]);
        }
        if(tmp.size()>=k){
            ans|=1LL<<i;
        }
    }
    out(ans);

    return 0;
}
