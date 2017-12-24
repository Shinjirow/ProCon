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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = a + b;
    int f = c + d;
    if(e > f){
        cout << "Left" << endl;
    }else if(e < f){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }

    return 0;
}