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
#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define show(n) cerr<<#n<<" = "<<n<<endl
#define showp(n) cerr<<n.fs<<", "<<n.sc<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", "}cerr<<endl

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

inline void io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}
inline int  in(){int n;scanf("%lld",&n);return n;}
inline void out(int n){printf("%lld\n",n);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int k;

unsigned int cur=19;

int digitsum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

long double val(int n){
    return (long double)n / (long double)digitsum(n);
}

void a(int i){
    if(i < 10) {
        printf("%lld\n", i);
        return;
    }
    while(true){
        if(val(cur) > val(cur+10LL)){
            cur+=10LL;
        }else break;
    }
    printf("%lld\n", cur);
    cur+=10LL;
}

signed main(){
    io();

    cin>>k;

    REP(i,1,k+1){

        a(i);
    }

    return 0;
}
