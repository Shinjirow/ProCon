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

char masu[41][41];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r, c;
    cin >> r >> c;
    rep(y, r){
        rep(x, c) cin >> masu[x][y];
    }
    /*
    rep(y, r){
        cerr << y << "行目 ";
        rep(x, c) cerr << masu[x][y];
        cerr << endl;
    }
    */
    int a = 0;
    int b = 0;
    rep(y, r){
        rep(x, c){
            if(masu[x][y] == '.'){
                if((x + y) % 2 == 0){
                    //cerr << "a " << i << ',' << j << endl;
                    a++;
                }else{
                    //cerr << "b " << i << ',' << j << endl;
                    b++;
                }
            }
        }
    }
    cerr << a << ' ' << b << endl;
    cout << max(a, b) << endl;

    return 0;
}