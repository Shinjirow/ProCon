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
    cin.tie(0);
    ios::sync_with_stdio(false);

    //not solved
    int n;
    cin >> n;
    vi vec(n);
    rep(i, n) cin >> vec[i];
    reverse(vec.begin(), vec.end());
    int minN = vec[0], maxN = vec[0] * 2 - 1;
    REP(i, 1, n){
        if(maxN > vec[i]){
            cout << -1 << endl;
            return 0;
        }
        minN = vec[i];
        maxN = vec[i] * 2 - 1;
    }

    cout << minN << ' ' << maxN << endl;

    return 0;
}