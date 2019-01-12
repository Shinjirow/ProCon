//#include "bits/stdc++.h"
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
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <complex>
#include <bitset>
#include <functional>
#include <stack>
#include <regex>
#include <tuple>
#include <iomanip>

#define int long long
#define REP(i,l,r) REPEAT(i,l,r,true) // [l, r)
#define rep(i,n) REP(i,0,n)           // [0, n)
#define REPEAT(i,l,r,condition) for(int i=(condition)?l:r-1;(condition)?i<r:i>=l;(condition)?++i:--i) // false<-[l, r)->true
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define fs first
#define sc second
#define show(...) cerr<<#__VA_ARGS__<<" = ";_DEBUG(__VA_ARGS__)
#define showlr(n,l,r) cerr<<#n<<" = ";for(int i=l;i<r;i++){cerr<<n[i]<<", ";}cerr<<endl // [l, r)

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

struct io{io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}}io;

template<class T> istream& operator >>(istream &is, vector<T> &v){for(T &e:v)is>>e;return is;}
template<class T> ostream& operator <<(ostream &os, vector<T> v){os<<"{";for(T &e:v)os<<e<<(v.size()-(int)(&e-&v[0])>1?", ":"");os<<"}";return os;}

void _DEBUG(){}
template<typename H,typename... T> void _DEBUG(H a,T...b){cerr<<a<<(sizeof...(b)?",":"\n");_DEBUG(b...);}

inline void in(){}
template<typename H,typename... T>void in(H &a, T&... b){cin>>a;in(b...);}
inline void out(){}
template<typename H,typename... T> void out(H a, T... b){cout<<a<<(sizeof...(b)?" ":"\n");out(b...);}

template<class T> void resz(int n,T& v){v.resize(n);}
template<class H,class... T> void resz(int n,H& a,T&... b){a.resize(n);resz(n,b...);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int h,w;
vector<string> grid;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
vi vec[400*400];
vector<vector<bool> > visited;
int ans=0;

bool check(int sz,int res){
    return 0<=res&&res<sz;
}

int search(int y,int x){
    vi v(2);
    queue<int> que;
    visited[y][x]=true;
    que.push(w*y+x);

    while(!que.empty()){
        int p=que.front();que.pop();
        if(grid[p/w][p%w]=='#') v[0]++;
        else v[1]++;
        for(auto e:vec[p]){
            // show(e/w,e%w);
            if(!visited[e/w][e%w]){
                que.push(e);
                visited[e/w][e%w]=true;
            }
        }
    }

    // show(v);
    return v[0]*v[1];
}

signed main(){

    in(h,w);
    resz(h,grid);
    visited.resize(h,vector<bool>(w,false));
    in(grid);

    rep(y,h){
        rep(x,w){
            rep(i,4){
                int d[]={y+dy[i],x+dx[i]};
                if(check(h,d[0])&&check(w,d[1])){
                    if(grid[y][x]!=grid[d[0]][d[1]]){
                        vec[w*y+x].pb(w*d[0]+d[1]);
                    }
                }
            }
        }
    }
    /*
    rep(i,h*w){
        show(i,vec[i]);
    }*/

    rep(y,h){
        rep(x,w){
            if(!visited[y][x])
                ans+=search(y,x);
        }
    }
    out(ans);

    return 0;
}
