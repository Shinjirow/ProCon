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

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

typedef long long ll;
typedef unsigned long long ull;

const int INF = ~(1 << 31);

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x, k;
    cin >> x >> k;
    int n = 1;
    rep(i, k){
        n *= 10;
    }
    int p = n;
    while(true){
        if(p > x) break;

        p += n;
    }
    cout << p << endl;


    return 0;
}