#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    //vi vec;
    int i;
    int ans = 0;
    int tmp = 1;
    cin >> N;
    rep(j, N){
        cin >> i;
        if(i % 2 == 0){
            tmp = tmp * 2;
        }
    }
    
    ans = pow(3, N) - tmp;
    //cout << tmp << "\n";
    cout << ans << "\n";
    return 0;
}