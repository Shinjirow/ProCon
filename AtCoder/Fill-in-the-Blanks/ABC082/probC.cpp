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

int a = 100001;

int num[100001];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    //solved

    int n;
    cin >> n;
    vi vec(n);
    rep(i, n){
        cin >> vec[i];
        if(vec[i] > a){ num[a]++; }
        else{ num[vec[i]]++; }
    }

    int cnt = 0;
    int b;
    REP(i, 1, a - 1){
        if(num[i] != i || num[i] != 0){
            b = max(num[i] - i, num[i] % i);
            cnt += b;
        }
    }
    cnt += num[a];
    cout << cnt << endl;

    return 0;
}