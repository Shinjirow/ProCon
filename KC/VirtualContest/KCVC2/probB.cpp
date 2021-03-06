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

    char c[27];
    string s;
    cin >> s;
    rep(i, s.size()){
        c[i] = s.at(i);
        rep(j, i){
            if(c[j] == c[i]){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;

    return 0;
}