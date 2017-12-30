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
    int N, A, B;
    cin >> N >> A >> B;
    vi vec(N);
    rep(i, N){
        cin >> vec[i];
    }
    int cnt = 0;
    while(true){
        sort(vec.begin(), vec.end(), greater<int>());
        vec[0] -= A;

        REP(i, 1, vec.size()){
            vec[i] -= B;
            if(vec[i] <= 0)vec.erase(vec.begin() + i, vec.end());
        }
        if(vec[0] <= 0) vec.erase(vec.begin());
        cnt++;
        if(vec.size() <= 0) break;
        // rep(i, vec.size()){
        //     cout << vec[i] << ',';
        // }cout << endl;
    }
    cout << cnt << endl;

    return 0;
}