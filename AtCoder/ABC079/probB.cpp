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

long long int luca[86];

long long int lucas(int N){
    if(luca[N] != 0){
        return luca[N];
    }else{
        luca[N] = lucas(N - 2) + lucas(N - 1);
        return lucas(N - 2) + lucas(N - 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    long long int N;
    cin >> N;
    luca[0] = 2;
    luca[1] = 1;
    cout << lucas(N) << endl;
    return 0;
}