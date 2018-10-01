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

char grid[9][9];

bool check(){
    
    rep(y,9){
        int l=0;
        rep(x,9){
            l=(grid[y][x]=='.')?l+1:0;
            if(l>=7) return false;
        }
    }
    rep(x,9){
        int l=0;
        rep(y,9){
            l=(grid[y][x]=='.')?l+1:0;
            if(l>=7) return false;
        }
    }
    rep(sz,3){
        int l=0,r=0;
        int a=0,b=0;
        int c=0,d=0;
        rep(i,9-sz){
            if(sz==0){
                l=(grid[i][i]=='.')?l+1:0;
                r=(grid[8-i][i]=='.')?r+1:0;
            }
            if(sz!=0){
                a=(grid[i+sz][i]=='.')?a+1:0;
                b=(grid[i][i+sz]=='.')?b+1:0;
                c=(grid[8-i-sz][i]=='.')?c+1:0;
                d=(grid[8-i][i+sz]=='.')?d+1:0;
            }
            if(max({l,r,a,b,c,d})>=7) {
                show(a,b,c,d,l,r);
                return false;
            }
        }
    }
    return true;
}

signed main(){
    io();
    rep(y,9){
        rep(x,9){
            in(grid[y][x]);
        }
    }
    out(check());

    return 0;
}
