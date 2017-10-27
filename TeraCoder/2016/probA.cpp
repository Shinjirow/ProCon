#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <stack>
#include <queue>

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
    cin >> N;
    int a, b;
    int c;
    rep(i, N){
        cin >> a >> b;
        rep(j, b){
            cin >> c;
            a += c;
        }
        cout << "Case #" << i + 1 << ":\n";
        if(a >= 0){
            cout << "OK" << "\n";
        }else{
            cout << "NG" << "\n";
        }
    }

    return 0;
}