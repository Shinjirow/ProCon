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
    int N;
    cin >> N;
    vi vec(N);
    rep(i, N){
        cin >> vec[i];
    }
    vsort(vec);
    int max = 0;
    rep(i, N){
        max += vec[i];
    }
    if(max % 10 == 0){
        rep(i, N){
            if(vec[i] % 10 != 0){
                cout << max - vec[i] << endl;
                return 0;
            }
        }
        cout << 0 << endl;
    }else{
        cout << max << endl;
    }

    return 0;
}