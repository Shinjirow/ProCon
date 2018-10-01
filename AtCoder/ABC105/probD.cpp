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

int n,m;
vi box;
vi ruiwa;
map<int,int> maap;

signed main(){
    io();

    cin>>n>>m;
    box.resize(n);
    ruiwa.resize(n+1);
    rep(i,n) {
        cin>>box[i];
        ruiwa[i+1]=box[i];
    }
    REP(i,1,n) ruiwa[i+1]+=ruiwa[i];
    rep(i,n+1) maap[ruiwa[i]%m]++;
    
    int ans=0;
    for(auto e : maap){
        //if(e.second<2) continue;
        ans+=(e.second*(e.second-1))/2;
    }
    out(ans);
    /*
    ans=0;

    rep(l,n+1)
        REP(r,l+1,n+1)
            if((ruiwa[r]-ruiwa[l])%m==0) ans++;
        
    out(ans);
    */

    return 0;
}
