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

char letter[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

int main(){
    ios::sync_with_stdio(false);
    char a, b;
    cin >> a >> b;
    int anum, bnum;
    rep(i, 6){
        if(a == letter[i]){
            anum = i;
        }
        if(b == letter[i]){
            bnum = i;
        }
    }
    if(anum > bnum){
        cout << ">" << endl;
    }else if(anum == bnum){
        cout << "=" << endl;
    }else{
        cout << "<" << endl;
    }

    return 0;
}