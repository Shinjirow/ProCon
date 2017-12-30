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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n;
    if(a + b + 1 != s.size()){
        no;
        return 0;
    }
    rep(i, s.size()){
        if(i < a){
            n = (int)s.at(i);
            if(n < 48 || n > 57){
                no;
                return 0;
            }
        }
        else if(i == a){
            if(s.at(i) != '-'){
                no;
                return 0;
            }
        }else{
            n = (int)s.at(i);
            if(n < 48 || n > 57){
                no;
                return 0;
            }
        }
    }
    yes;

    return 0;
}