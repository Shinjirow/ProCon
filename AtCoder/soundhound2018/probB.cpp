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
    int low, high;
    cin >> n >> low >> high;
    vi vec(n);
    rep(i, n) cin >> vec[i];
    
    rep(i, n){
        if(vec[i] < low){
            cout << low;
        }else if(vec[i] > high){
            cout << high;
        }else{
            cout << vec[i];
        }
        if(i != n) cout << ' ';
    }
    cout << endl;

    return 0;
}