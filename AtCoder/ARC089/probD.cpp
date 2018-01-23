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
    int n, k;
    cin >> n >> k;
    vi x(n);
    vi y(n);
    vector<char> c(n);
    rep(i, n) cin >> x[i] >> y[i] >> c[i];
    int maxhope = 0;
    //k通りシミュレートすればいけるのでは
    int xkyoukai;
    int ykyoukai;
    int mataidakaisuu;
    int hope;
    rep(i, k){
        rep(j, k){
            hope = 0;
            xkyoukai = j + 1;
            ykyoukai = i + 1;
            rep(m, n){
                mataidakaisuu = 0;
                mataidakaisuu += ((k - xkyoukai) + x[m]) / k;
                mataidakaisuu += ((k - ykyoukai) + y[m]) / k;
                //cerr << "mataidakaisuu[" << m << "] = " << mataidakaisuu << endl;
                if(mataidakaisuu % 2 == 0){
                    if(c[m] == 'W') hope++;
                }else{
                    if(c[m] == 'B') hope++;
                }
            }
            //cerr << "hope = " << hope << endl;
            maxhope = max({hope, (n - hope), maxhope});
            if(maxhope == n){
                cout << maxhope << endl;
                return 0;
            }
        }
    }

    cout << maxhope << endl;

    return 0;
}