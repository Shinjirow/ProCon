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

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vi a(N);
    vi b(N);
    vi c(N);
    rep(i, N){
        cin >> a[i];
    }
    rep(i, N){
        cin >> b[i];
    }
    rep(i, N){
        cin >> c[i];
    }

    vsort(a);
    vsort(b);
    vsort(c);
    /*
    rep(i, N){
        cout << a[i] << ", ";
    }
    cout << endl;
    rep(i, N){
        cout << b[i] << ", ";
    }
    cout << endl;
    rep(i, N){
        cout << c[i] << ", ";
    }
    cout << endl;
    */

    long long ans = 0LL;

    rep(i, N){
        ans += (lower_bound(a.begin(), a.end(), b[i]) - a.begin()) * (c.end() - upper_bound(c.begin(), c.end(), b[i]));
    }
    cout << ans << endl;

    return 0;
}