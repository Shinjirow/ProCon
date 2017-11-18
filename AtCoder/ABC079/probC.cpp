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

vi num(4);

bool zero(){
    int ans = 0;
    rep(i, 4){
        ans+= num[i];
    }
    if(ans == 7) return true;
    return false;
}

int ichi(){
    int ans = 0;
    REP(i, 1, 4){
        num[i] = -num[i];
        rep(j, 4){
            ans += num[j];
        }
        num[i] = -num[i];
        if(ans == 7) return i;
        ans = 0;
    }
    return -1;
}

int ni(){
    int ans = 0;
    /*rep(i, 4){
        cout << num[i] << ", ";
    }cout << endl;*/
    REP(i, 1, 4){
        REP(j, 1, 4){
            if(j != i){
                num[j] = -num[j];
                //cout << "rev" << j << '=' << num[j] << ',';
            }
        }
        //cout << endl;
        rep(j, 4){
            ans += num[j];
            //cout << num[j] << '>';
        }
        REP(j, 1, 4){
            if(i != j){
                num[j] = -num[j];
            }
        }
        //cout << endl << "ans = " << ans << endl;
        if(ans == 7) return i;
        ans = 0;
    }
    return -1;
}

bool san(){
    int ans = num[0];
    REP(i, 1, 4){
        num[i] = -num[i];
        ans += num[i];
    }
    REP(i, 1, 4){
        num[i] = -num[i];
    }
    if(ans == -7) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    char n;
    rep(i, 4){
        cin >> n;
        num[i] = n - 48;
        //cout << num[i];
    }

    int a = ichi();
    /*
    rep(i, 4){
        cout << num[i];
    }
    cout << endl;*/
    
    if(zero()){
        cout << num[0] << '+' << num[1] << '+' << num[2] << '+' << num[3] << "=7" << endl;
    }/*else if(san()){
        cout << num[0] << '-' << num[1] << '-' << num[2] << '-' << num[3] << "=7" << endl;
    }*/else if(a != -1){
        cout << num[0];
        REP(i, 1, 4){
            if(i != a){
                cout << '+';
            }else{
                cout << '-';
            }
            cout << num[i];
        }
        cout << "=7" << endl;
    }else{
        int res = ni();
        cout << num[0];
        REP(i, 1, 4){
            if(i != res){
                cout << '-';
            }else{
                cout << '+';
            }
            cout << num[i];
        }
        cout << "=7" << endl;
    }

    return 0;
}