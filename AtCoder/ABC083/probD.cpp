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
    string s;
    cin >> s;
    int cnt = 0;
    vi vec;
    char prev = s.at(0);
    rep(i, s.size()){
        if(prev != s.at(i)){
            prev = s.at(i);
            vec.push_back(cnt);
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back(cnt);
    if(vec.size() <= 2){
        sort(vec.begin(), vec.end(), greater<int>());
        cout << vec[0] << endl;
    }else{
        int cnt = 0;
        int half;
        if(s.size() % 2 == 1){
            half = s.size() / 2 + 1;
        }else{
            half = s.size() / 2;
        }
        int tmp = 0;
        rep(i, vec.size()){
            cnt += vec[i];
            if(cnt >= half) break;
        }
        swap(tmp, cnt);
        for(int i = vec.size() - 1;i >= 0;--i){
            cnt += vec[i];
            if(cnt >= half) break;
        }
        if(tmp < cnt){
            swap(tmp, cnt);
        }
        cout << cnt << endl;
    }

    return 0;
}