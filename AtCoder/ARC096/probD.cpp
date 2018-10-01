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
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define showp(n) cerr<<n.fs<<", "<<n.sc<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", ";}cerr<<endl

#define yes printf("Yes\n")
#define no printf("No\n")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using ull=unsigned long long;
using vi=vector<int>;
using pint=pair<int,int>;

const int INF=1LL<<55;

int n,c;
vector<pint> table;
int a, b;
int ans=0;
vector<pint> cl,rcl;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin>>n>>c;
    if(n > 100){cout<<0<<endl;return 0;}

    rep(i,n){
        cin>>a>>b;
        table.pb(mp(a,b));
        cl.pb(mp(a,b));
    }
    REP(i,1,cl.size()){
        cl[i].sc+=cl[i-1].sc;
    }
    REV(i,0,table.size()-1){
        rcl.pb(table[i]);
    }
    REP(i,1,rcl.size()){
        rcl[i].sc+=rcl[i-1].sc;
    }

    /*
    showsp(table);
    showsp(cl);
    showsp(rcl);*/

    for(b=rcl.size()-1;b>=0;b--){
        for(a=0;a<b;a++){
            int d=min(2*cl[a].fs+(c-rcl[b].fs), cl[a].fs+2*(c-rcl[b].fs));
            ans=max(ans,cl[a].sc+rcl[b].sc-d);
        }
    }
    cout<<ans<<endl;

    return 0;
}