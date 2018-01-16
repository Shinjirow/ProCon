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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    char c[4];
    rep(i, 4){
        cin >> c[i];
    }
    
    if(c[0] == c[2] && c[1] == c[3]){
        yes;
    } else {
        no;
    }

    return 0;
}