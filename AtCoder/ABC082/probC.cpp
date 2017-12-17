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
#include <set>

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

int howmany[1000000001];

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vi v(N);
    set<int> st;
    rep(i, N){
        cin >> v[i];
    }
    rep(i, N){
        howmany[v[i]]++;
        st.insert(v[i]);
    }
    int a = 0;
    for(auto itr = st.begin(); itr != st.end(); ++itr){
        if(howmany[*itr] < *itr){
            a += howmany[*itr];
        }else if(howmany[*itr] > *itr){
            a += howmany[*itr] - *itr;
        }
        
    }

    cout << a << endl;


    return 0;
}