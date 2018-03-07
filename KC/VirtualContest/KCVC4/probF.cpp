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

int n;
vi c, s, f;

void solve(int st, int t){
    /*cerr << "--------------" << endl;
    show(st);
    show(t);*/
    if(st == n - 1){
        cout << t << endl;
        //cerr << "return" << endl;
        return;
    }
    if(t < s[st]){ t = s[st] + c[st]; }
    else{
        int i = s[st];
        while(true){
            if(t <= i) break;

            i += f[st];
        }
        t = i + c[st];
    }

    return solve(st + 1, t);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    int l, m, o;
    rep(i, n){
        cin >> l >> m >> o;
        c.pb(l);s.pb(m);f.pb(o);
    }

    rep(i,n){ solve(i, 0); }

    return 0;
}