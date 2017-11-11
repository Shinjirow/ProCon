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

using namespace std;

bool dp[10000001][1001];

int main(){
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    stack<int> sta, stb;
    int N;
    rep(i, a){
        cin >> N;
        sta.push(N);
    }
    rep(i, b){
        cin >> N;
        stb.push(N);
    }

    dp[0][0] = true;
    rep(i, 10000001){
        REP(j, 1, double(a + b + 0.5) / 2){
            if(dp[i][j - 1]){
                dp[i + ][j - 1] = true;
            }
        }
    }



    return 0;
}