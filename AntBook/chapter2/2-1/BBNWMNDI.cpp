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

int N;
vi vec;
int K;

bool dfs(int i, int sum){
    //ゴールまで達しているので、合計値と目標値が一致しているかチェック
    if(i == N) return sum == K;
    //現在の値を足さない場合にゴールまでいってtrueが帰って来ればtrueを返す
    if(dfs(i + 1, sum))return true;
    //現在の値を足した場合にゴールまでいってtrueが帰って来ればtrueを返す
    if(dfs(i + 1, sum + vec[i])) return true;
    //だめだったらfalseを返す
    return false;
}

int main(){
    ios::sync_with_stdio(false);

    cin >> N;
    vec.reserve(N);
    rep(i, N)
        cin >> vec[i];
    cin >> K;

    if(dfs(0, 0)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}