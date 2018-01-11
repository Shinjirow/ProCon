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

int n, y;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int osatsu[3] = {1000, 5000, 10000};
    cin >> n >> y;
    int nokori;
    int sum;
    for(int i = n;i >= 0;--i){
        nokori = n - i;
        rep(j, (n - i) + 1){
            sum = (osatsu[0] * i);
            sum += (osatsu[1] * ((n - i) - j));
            sum += (osatsu[2] * j);
            if(sum == y) {
                cout << j << ' ' << n - i - j << ' ' << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;

    return 0;
}