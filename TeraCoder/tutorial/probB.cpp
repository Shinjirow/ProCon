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
    cin >> N;
    int a, b;
    rep(i, N){
        cin >> a >> b;
        cout << "Case #" << i + 1 << ":\n";
        cout << a / b << " " << a % b << "\n";
    }

    return 0;
}