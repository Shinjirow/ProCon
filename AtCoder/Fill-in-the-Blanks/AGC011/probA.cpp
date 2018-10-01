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
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", "}cerr<<endl

#define yes printf("Yes\n")
#define no printf("No\n")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

const int INF=1LL<<55;

int n,c,k;
vector<pint> a;
int ans=0;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin>>n>>c>>k;

    int x;
    rep(i,n){
        cin>>x;
        a.pb(mp(x, x+k));
    }

    sort(all(a));

    int bust=a[0].sc;
    int bussz=0;
    
    rep(i,n){
        if(bussz==c || a[i].fs > bust){
            bust=a[i].sc;
            bussz=1;
            ans++;
        }else{
            bussz++;
        }
    }
    if(bussz!=0) ans++;
    
    cout<<ans<<endl;

    return 0;
}