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

int n;
vi vec;
int lo=INF, hi=-INF;
int mid;

int c(int x){
    int sad=0;
    rep(i,n){
        sad+=abs(vec[i]-(i+1)-x);
    }
    return sad;
}

signed main(){
    io();
    cin>>n;
    vec.resize(n);
    rep(i,n) {
        cin>>vec[i];
        lo=min(lo,vec[i] - i-1);
        hi=max(hi,vec[i] - i-1);
    }
    lo--;
    hi++;
    
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(abs(c(hi)-c(mid))<=abs(c(lo)-c(mid))){
            lo=mid;
        }else{
            hi=mid;
        }
    }
    out(min({c(hi), c(lo), c(mid)}));
    return 0;
}
