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
    int N, Z, W;
    cin >> N >> Z >> W;
    vi vec(N);
    int max = -1, min = 1000000001;
    rep(i, N){
        cin >> vec[N];
        if(vec[N] >= max){
            max = N;
        }
        if(vec[N] <= min){
            min = N;
        }
    }

    if(max >= N - 2 && min < max){
        //どちらかを犠牲にする必要がある
        if(vec[max] - vec[max + 1] >= vec[N - 1] - W){
            Z = vec[max];
            W = vec[max + 1];
        }else{
            Z = vec[max + 1];
        }
    }else{
        Z = vec[max];
        W = vec[min];
    }

    cout << Z - W << endl;
    
    return 0;
}