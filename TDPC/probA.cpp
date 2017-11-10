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

bool memo[10001];

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vi vec(N);
    memo[0] = true;
    rep(i, N) cin >> vec[i];

    rep(i, N){
        for(int j = 10000;j >= 0;--j){
            if(memo[j]){
                memo[j + vec[i]] = true;
            }
        }
    }

    int count = 0;
    rep(i, 10000){
        if(memo[i]) count++;
    }
    cout << count << endl;

    return 0;
}