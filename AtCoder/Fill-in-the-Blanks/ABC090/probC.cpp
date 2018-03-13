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
#include <set>
#include <unordered_map>
#include <unordered_set>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define all(e) e.begin(), e.end()
#define vi vector<int>
#define vd vector<double>
#define ret return 0;

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

typedef long long ll;
typedef unsigned long long ull;

const int INF = ~(1 << 31);

using namespace std;

int a = 100001;

int num[100001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;

    if(n == 1){
        if(m == 1){
            cout << 1 << endl;
            ret;
        }else{
            cout << m - 2 << endl;
            ret;
        }
    }
    if(m == 1){
        if(n == 1){
            cout << 1 << endl;
            ret;
        }else{
            cout << n - 2 << endl;
            ret;
        }
    }

    cout << (n - 2) * (m - 2) << endl;

    return 0;
}