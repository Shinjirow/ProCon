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
    int n, a, b;
    cin >> n >> a >> b;
    int kakuketanowa;
    int kakuketa;
    int m;
    int sum = 0;
    REP(i, 1, n + 1){
        m = i;
        kakuketanowa = 0;
        while(m){
            kakuketa = m % 10;
            kakuketanowa += kakuketa;
            m /= 10;
        }
        if(kakuketanowa >= a && kakuketanowa <= b){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}