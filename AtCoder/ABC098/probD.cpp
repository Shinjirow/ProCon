//#include "bits/stdc++.h"
#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <set>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#define int long long
#define REP(i, a, n) for (int i = a; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define REV(i, a, n) for (int i = n; i >= a; --i)
#define all(e) e.begin(), e.end()
#define rall(e) e.rbegin(), e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
#define show(n) cerr << #n << " = " << n << endl
#define showp(n) cerr << n.fs << ", " << n.sc << endl
#define shows(n)       \
  for (auto z : n) {   \
    cerr << z << ", "; \
  }                    \
  cerr << endl
#define showsp(n)                       \
  for (auto z : n) {                    \
    cerr << z.fs << " " << z.sc << ", " \
  }                                     \
  cerr << endl

#define yes printf("Yes\n")
#define no printf("No\n")
#define case (i) printf("Case #%lld: ", i)

using namespace std;

using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int, int>;

const int INF = 1LL << 55;

int n;
int xsum = 0, sum = 0, ans = 0;

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin>>n;
  vi vec(n);
  rep(i,n) cin>>vec[i];



  for(int l=0,r=0;r<n;l++){
    while(r<n){
      if(sum+vec[r]!=(xsum^vec[r])) break;
      sum+=vec[r];
      xsum^=vec[r];
      ans+=r-l+1;
      r++;
    }
    sum-=vec[l];
    xsum^=vec[l];
  }

  cout<<ans<<endl;

  return 0;
}
