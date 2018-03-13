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

    vi vec(100001);
    vi num(n);
    rep(i, n){ 
        scanf("%d", &num[i]);
        //cin >> num[i];
        vec[num[i]]++;
    }

    sort(all(num));

    int ans;
    int maxans = 0;
    REP(i, num[0], num[n - 1] + 1){
        ans = vec[i - 1] + vec[i] + vec[i + 1];
        //REP(j, i - 1, i + 2){ ans += vec[j]; }
        //maxans = max(ans, maxans);
        if(maxans < ans){ maxans = ans; }
    }
    cout << maxans << endl;

    return 0;
}