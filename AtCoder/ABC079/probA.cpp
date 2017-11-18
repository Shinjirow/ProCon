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
    ios::sync_with_stdio(false);
    char a[4];
    rep(i, 4){
        cin >> a[i];
    }
    char b;
    int c = 0;
    rep(i, 4){
        b = a[i];
        rep(j, 4){
            if(b == a[j]){
                c++;
            }else{
                c = 0;
            }
            if(c >= 3){
                yes;
                return 0;
            }
        }
        c = 0;
    }
    no;
    return 0;
}