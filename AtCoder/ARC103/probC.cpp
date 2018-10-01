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

int n;

vi vec;
map<int,int> a,b;
int ans=0;

signed main(){
    io();
    in(n);
    vec.resize(n);
    rep(i,n) in(vec[i]);

    rep(i,n){
        if(i&1){
            a[vec[i]]++;
        }else{
            b[vec[i]]++;
        }
    }
    int maxa=-1;
    int nexta=0;
    int val;
    for(auto e:a){
        if(maxa<e.second){
            nexta=max(nexta,maxa);
            maxa=e.second;
            val=e.first;
        }else if(nexta<e.second){
            nexta=e.second;
        }
    }
    int maxb=-1;
    int nextb=0;
    int var;
    for(auto e:b){
        if(maxb<e.second){
            nextb=max(nextb,maxb);
            maxb=e.second;
            var=e.first;
        }else if(nextb<e.second){
            nextb=e.second;
        }
    }
    //show(maxa,maxb,nexta,nextb);
    //show(val,var);
    if(val!=var){
        ans=n/2-maxa+n/2-maxb;
    }else{
        int resa=n/2-maxb+n/2-nexta;
        int resb=n/2-maxa+n/2-nextb;
        //show(resa,resb);
        ans=min(resa,resb);
    }
    out(ans);

    return 0;
}
