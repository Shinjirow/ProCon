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
    int n, k;
    cin >> n >> k;
    vi vec(n);
    vi ary(n + 1);
    rep(i, n){
        cin >> vec[i];
        ary[vec[i]]++;
    }
    vsort(ary);
    // REP(i, 1, n + 1){
    //     cout << ary[i] << endl;
    // }
    int cnt = 0;
    rep(i, n - k + 1){
        cnt += ary[i];
    }

    cout << cnt << endl;


    return 0;
}