//書き散らかしたけど未完

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

typedef pair<int, int> pii;

struct Node{
    int to;
    int cost;
};

int INF = 

int V;
vector<Node> G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> > que;
    fill(d, d + V, INF);
}

int main(){
    ios::sync_with_stdio(false);
    
    

    return 0;
}