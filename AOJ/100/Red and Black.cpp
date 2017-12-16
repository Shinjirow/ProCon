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

using namespace std;

int room[22][22];

const int dx[4] = {0, -1, 1, 0};
const int dy[4] = {-1, 0, 0, 1};

void bfs(pair<int, int> s){
    set<pair<int, int> > houmon;
    queue<pair<int, int> > q;
    q.push(s);
    pair<int, int> cur;
    int x, y;
    while(true){
        cur = q.front(); q.pop();
        rep(d, 4){
            x = cur.first + dx[d];
            y = cur.second + dx[d];
            if(x != 0 && y != 0 && houmon.find(make_pair(x, y)) != houmon.end()){
                houmon.insert(make_pair(x, y));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    int W, H;
    char a;
    pair<int, int> start;
    while(true){
        cin >> W >> H;
        if(W == 0 && H == 0) return 0;
        REP(i, 1, W){
            REP(j, 1, H){
                cin >> a;
                if(a == '.') room[i][j] = 1;
                else if(a == '@') start = make_pair(i, j);
            }
        }
        bfs(start);
    }


    return 0;
}