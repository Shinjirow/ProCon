//not solved
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

int par[1000];
int uni_rank[1000];

void init(int n){
    REP(i, 0, n){
        par[i] = i;
        uni_rank[i] = 0;
    }
}

int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(uni_rank[x] < uni_rank[y]) par[x] = y;
    else{
        par[y] = x;
        if(uni_rank[x] == uni_rank[y]) uni_rank[x]++;
    }
}

bool same(int x, int y){
    return find(x) == find(y);
}


int main(){
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    init(n);

    return 0;
}