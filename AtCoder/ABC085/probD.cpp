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
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h;
    cin >> n >> h;
    vector<int> throwing(n);
    vector<int> attacking(n);
    rep(i, n) cin >> attacking[i] >> throwing[i];

    sort(throwing.begin(), throwing.end(), greater<int>());
    sort(attacking.begin(), attacking.end(), greater<int>());
    
    int a = n;
    int dmg = 0;
    rep(i, throwing.size()){
        if(attacking[0] >= throwing[i]){
            a = i;
            break;
        }
        dmg += throwing[i];
        if(dmg >= h){
            cout << i + 1 << endl;
            return 0;
        }
    }
    
    int howmany = (h - dmg) / attacking[0];
    if((h - dmg) % attacking[0] > 0) howmany++;
    howmany += a;

    // cout << (h - dmg) / attacking[0] << endl;
    // cout << (h - dmg) % attacking[0] << endl;
    // cout << a << ',' << dmg << endl;
    cout << howmany << endl;

    return 0;
}