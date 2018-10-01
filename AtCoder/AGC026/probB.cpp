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
int a,b,c,d;
int tmp;
set<int> used;

int gcd(int x, int y){
    if(y==0) return x;
    return gcd(y,x%y);
}

void solve(){
    used.clear();
    cerr<<"a "<<a<<",b "<<b<<",c "<<c<<",d "<<d<<endl;
    int g=gcd(b,d);
    cerr<<"gcd = "<<g<<", b-gcd(b,d) = "<<b-g<<endl;
    cerr<<"a%g = "<<a%g<<endl;
    if(b>d || a<b){
        no;
        return;
    }
    if(b-c<=1){
        yes;
        return;
    }
    
    tmp=a;
    while(true){
        tmp%=b;
        show(tmp);
        if(used.find(tmp)!=used.end()){
            yes;
            return;
        }
        if(tmp<=c){
            used.insert(tmp);
            tmp+=d;
            continue;
        }else{
            no;
            return;
        }
        
    }
   
}

signed main(){
    io();
    cin>>n;

    while(n--){
        cin>>a>>b>>c>>d;
        solve();
    }

    return 0;
}
