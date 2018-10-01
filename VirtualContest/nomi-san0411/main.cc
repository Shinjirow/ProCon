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
#define REP(i,a,n) for(int i=(a);i<(n);++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=(n);i>=(a);--i)
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

int dp[1002][1002];

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w;
    cin>>w>>h;
    if(w>1000||h>1000){cout<<0<<endl;return 0;}
    dp[0][1]=1;
    
    REP(i,1,h+1){
        REP(j,1,w+1){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
            dp[i][j]%=mod;
            //show(dp[i][j]);
        }
    }

    cout<<dp[h][w]<<endl;

    return 0;
}
