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

int n,k;
vi vec;
vi howmany;
vi zeros;
int sum=0;
vi ans(5000,0);

int nCr(int n, int r) {
    if (r==0) {
        return 1;
    }
    
    return (n-r+1)*nCr(n,r-1)/r;
}


signed main(){
    io();
    in(n,k);
    if(k==0){
        out(1);
        return 0;
    }

    vec.resize(n);
    howmany.resize(n);
    rep(i,n){
        in(vec[i]);
        int res=0;
        while(vec[i]){
            vec[i]/=2;
            res++;
        }
        howmany[i]=res;
        sum+=res;
    }
    shows(howmany);
    show(sum);
    zeros.resize(sum+1,0);
    for(auto e:howmany) zeros[e]++;
    REP(i,1,sum+1) zeros[i]+=zeros[i-1];
    ans[0]=1;
    ans[1]=n-(zeros[0]>0?zeros[0]:0);
    REP(i,2,sum){
        ans[i]=(ans[i-1]*n-zeros[i]-(ans[i-1]-2)*(ans[i-1]-1)/2) % MOD;
        show(i,ans[i],ans[i-1],n,zeros[i],(ans[i-1]-2)*(ans[i-1]-1)/2,ans[i-1]*n);
    }
    ans[sum]=1;
    showslr(ans,0,sum+1);
    REP(i,1,ans.size())ans[i]+=ans[i-1];
    showslr(ans,0,sum+1);
    int x=zeros[0]>0?0:1;
    out(ans[k>=sum?sum:k]-x);

    
    return 0;
}
