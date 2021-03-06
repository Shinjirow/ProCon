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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int amari = 0;
    int tgt = N;
    while(N > 0){
        amari += N % 10;
        N = N / 10;
    }
    if(tgt % amari == 0){
        yes;
    }else{
        no;
    }

    return 0;
}