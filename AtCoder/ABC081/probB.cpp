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
    int n;
    cin >> n;
    vi vec(n);
    rep(i, n){
        cin >> vec[i];
    }
    int min = 100000000;
    int cnt;
    rep(i, n){
        cnt = 0;
        while(true){
            if(vec[i] % 2 != 0){
                break;
            }
            vec[i] /= 2;
            cnt++;
        }
        if(min > cnt) min = cnt;
    }
    cout << min << endl;

    return 0;
}