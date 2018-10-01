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

int n;
string s;
int min_n = 1000000;
int ans;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin>>n;
    vi vec(n);
    cin>>s;

    rep(i,n){
        if(s[i] == 'W') vec[i]++;
    }
    REP(i,1,n){
        vec[i] +=vec[i-1];
    }

    //shows(vec);

    rep(i,n){
        ans = vec[i];
        if(s[i]=='W') ans--;
        ans += (n-1 - i) - (vec[n-1] - vec[i]);
        //show(ans);
        min_n = min(ans, min_n);
    }
    cout<<min_n<<endl;

    return 0;
}
