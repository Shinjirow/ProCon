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
    string o;
    string e;
    cin >> o;
    cin >> e;
    string str;
    int len;
    int shorter = 0;
    if(o.size() < e.size()){
        len = o.size();
        shorter = -1;
    }else if(o.size() > e.size()){
        len = e.size();
        shorter = 1;
    }else{
        len = o.size();
    }
    rep(i, len){
        str += o.at(i);
        str += e.at(i);
        if(i + 1 == len){
            if(shorter == -1){
                str += e.at(i + 1);
            }else if(shorter == 1){
                str += o.at(i + 1);
            }
        }
    }

    cout << str << endl;

    return 0;
}