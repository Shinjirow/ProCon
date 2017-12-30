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

int N;
vi c;
vi s;
vi f;

void solve(int t, int st){
    if(st == N - 1){
        cout << t << endl;
        return;
    }
    if(t < s[st]){
        t = s[st];
    }else{
        int tmp = s[st];
        while(true){
            tmp = tmp + f[st];
            if(tmp >= t){
                t = tmp;
                break;
            }
        }
    }
    solve(t + c[st], st + 1);
}

int main(){
    ios::sync_with_stdio(false);

    cin >> N;
    int ci, si, fi;
    rep(i, N - 1){
        cin >> ci >> si >> fi;
        c.push_back(ci);
        s.push_back(si);
        f.push_back(fi);
    }
    rep(i, N){
        solve(0, i);
    }

    return 0;
}