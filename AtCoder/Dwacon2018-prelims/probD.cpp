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
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vi x(n);
    rep(i, n){
        cin >> x[i];
    }
    vi a(n - 1);
    rep(i, n - 1){
        cin >> a[i];
    }

    /*
    木をはやして辺の長さが2以上まで伸びてたら
    根っこを切ったらよさそう(こなみかん)
    木を生やせないのでむりです
    */

    return 0;
}