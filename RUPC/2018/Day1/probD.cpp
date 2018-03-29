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
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = (1 << 30);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<pair<double, int> > s(n);
    rep(i, n){
        cin >> s[i].first;
        s[i].second = 1;
    }
    int erased = 0;
    double min;
    int minp;
    double l, r;

    while(true){
        //cerr << "------" << endl;
        //rep(i, n - erased) show(s[i].fs);
        
        
        if(erased == n - m) break;

        
        min = 1000000000;
        minp = 0;

        rep(i, n){
            if(min > s[i].first){
                min = s[i].first;
                minp = i;
            }
        }
        l = 1000000000;
        r = 1000000000;

        //cerr << "ここまで" << endl;

        if(minp != 0){
            l = s[minp - 1].first;
        }
        if(minp != n - erased - 1){
            r = s[minp + 1].first;
        }
        if(l > r){
            s[minp].first = (s[minp].first*s[minp].sc + s[minp + 1].first*s[minp + 1].sc) /(s[minp].sc + s[minp + 1].sc);
            s[minp].sc += 1;
            s.erase(s.begin() + minp + 1);
        }else{
            s[minp - 1].first = (s[minp].first*s[minp].sc + s[minp - 1].first*s[minp - 1].sc) /(s[minp].sc + s[minp - 1].sc);
            s[minp - 1].sc += 1;
            s.erase(s.begin() + minp);
        }
        erased++;
    }
    //cerr << "ここまで動いた" << endl;
    double ans = 0;
    rep(i, n - erased){
        ans += s[i].fs;
    }
    //cout << ans << endl;
    printf("%.15lf\n", ans);

    return 0;
}