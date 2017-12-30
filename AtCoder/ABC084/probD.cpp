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

int cnt;
vector<bool> IsPrime;

void sieve(int max){
    if(max+1 > IsPrime.size()){
        IsPrime.resize(max+1,true);
    } 
    IsPrime[0] = false;
    IsPrime[1] = false;

    for(int i=2; i*i<=max; ++i)
        if(IsPrime[i])
            for(int j=2; i*j<=max; ++j)
                IsPrime[i*j] = false;
}

int main(){
    ios::sync_with_stdio(false);
    sieve(100000);
    int n;
    int st, ed;
    cin >> n;
    vi a;
    for(int i = 1;i <= 99999;i += 2){
        if(IsPrime[i] && IsPrime[(i + 1)/2]){
            a.push_back(i);
        }
    }
    int cnt;

    rep(i, n){
        scanf("%d%d", &st, &ed);
        cnt = 0;
        rep(j, a.size()){
            if(a[j] >= st && a[j] <= ed) cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}