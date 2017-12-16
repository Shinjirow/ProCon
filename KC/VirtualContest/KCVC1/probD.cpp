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

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vi x(n);
    rep(i, n){
        cin >> x[i];
    }
    vi y(m);
    rep(i, n){
        cin >> y[i];
    }
    vsort(x);
    vsort(y);
    cout << (x[n - 1] - x[0]) * (y[m - 1] - y[0]) * (n - 1) * (m - 1) << endl;

    return 0;
}