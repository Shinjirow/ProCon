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
#include <climits>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

using namespace std;

typedef pair<int, int> pii;

struct Edge{
    int from;
    int to;
    int cost;
};

int I, J;

vector<Edge> G[17];
int d[17];

void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> > que;
    fill(d, d + I, INT_MAX);
    d[s] = 0;
    que.push(pii(0,s));

    while(!que.empty()){
        pii p = que.top(); que.top();
        int v = p.second;
        if(d[v] < p.first) continue;
        REP(i, 0, G[I].size()){
            Edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(pii(d[e.to], e.to));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);

    cin >> I >> J;
    Edge e;

    rep(i, 17){
        cin >> e.from;
    }
    return 0;
}