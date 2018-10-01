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
#define REP(i,l,r) REPEAT(i,l,r,true) //[l, r)
#define rep(i,n) REP(i,0,n)           //[0, n)
#define REPEAT(i,l,r,condition) for(int i=(condition)?l:r-1;(condition)?i<r:i>=l;(condition)?++i:--i) // false<-[l, r)->true
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define fs first
#define sc second
#define show(...) cerr<<#__VA_ARGS__<<" = ";_DEBUG(__VA_ARGS__)
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showslr(n,l,r) cerr<<#n<<" = ";for(int i=l;i<r;i++){cerr<<n[i]<<", ";}cerr<<endl //[l, r)

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

inline void io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}

void _DEBUG(){cerr<<endl;}
template<typename H,typename... T> void _DEBUG(H a,T...b){cerr<<a<<",";_DEBUG(b...);}

inline void in(){}
template<typename H,typename... T>void in(H &a, T&... b){cin>>a;in(b...);}
inline void out(){}
template<typename H,typename... T> void out(H a, T... b){cout<<a<<endl;out(b...);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int h,w;
char grid[12][12];
pint s;
vector<string> commands(3);
bool res=false;
string result;

void dfs(pint cur,string command){
    if(res) return;
    if(cur.fs==1){
        res=true;
        result=command;
        return;
    }
    REP(i,-1,2){
        pint next={cur.fs-1,cur.sc+i};
        if(grid[next.fs][next.sc]=='.'){
            dfs(next,command+commands[i+1]);
        }
    }
}

signed main(){
    io();
    in(h,w);
    fill(grid[0],grid[11],'x');
    commands[0]="L";
    commands[1]="S";
    commands[2]="R";
    REP(y,1,h+1){
        REP(x,1,w+1){
            in(grid[y][x]);
            if(grid[y][x]=='s'){
                s.fs=y;s.sc=x;
            }
        }
    }
    /*
    rep(i,12){
        rep(j,12){
            printf("%c",grid[i][j]);
        }puts("");
    }*/
    dfs(s,"");
    out(res?result:"impossible");


    return 0;
}
