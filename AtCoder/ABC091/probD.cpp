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
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = ~(1 << 31);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<long> a(n+1);
    vector<long> b(n+1);
    rep(i, n){ cin >> a[i]; }
    rep(i, n){ cin >> b[i]; }
    sort(all(a));
    sort(all(b));
    //vector<int> ab(n*n);
    //rep(i, n){
    //    rep(j, n){ab[i*n+j] = a[i]+b[j];}
    //}
    long ans = 0;
    rep(i, n){
        rep(j, n){
            ans = ans ^ (a[i]+b[j]);
        }
    }
    cout << ans << endl;

    return 0;
}