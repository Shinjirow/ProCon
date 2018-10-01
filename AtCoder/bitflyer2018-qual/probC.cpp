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

using ull=unsigned long long;
using vi=vector<int>;
using pint=pair<int,int>;

const int INF=1LL<<55;

int n,d;
vi vec;
int ans=0;

int triangle(int a){
    return a*(a-1)/2;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin>>n>>d;
    vec.resize(n);
    rep(i, n) scanf("%lld", &vec[i]);

    REP(j,1,n-1){
        int l=lower_bound(all(vec),vec[j]-d)-vec.begin();
        int r=upper_bound(all(vec),vec[j]+d)-vec.begin()-1;
        ans+=(j-l)*(r-j);
    }

    //show(ans);

    rep(l,n-1){
        int r=upper_bound(all(vec),vec[l]+d)-vec.begin()-1;
        ans -=triangle(r-l);
    }
    cout<<ans<<endl;

    return 0;
}
