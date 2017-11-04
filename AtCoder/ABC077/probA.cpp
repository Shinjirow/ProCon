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
    string str;
    string str2;
    cin >> str;
    cin >> str2;
    reverse(str.begin(), str.end());
    if(str == str2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}