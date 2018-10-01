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
template<typename T> inline void in(T &e){cin>>e;}
template<typename T> inline void out(T e){cout<<e<<endl;}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int n,m,q;
vi s,g;

int ans;

signed main(){
    io();
    cin>>n>>m>>q;
    s.resize(n+1);
    g.resize(n+1);
    int l,r;
    rep(i,m){
        scanf("%lld %lld",&l,&r);
        s[l]++;
        g[r]--;
    }

    while(q--){
        ans=0;
        stack<int> st;
        scanf("%lld %lld",&l,&r);
        REP(i,l,r+1){
            if(s[i]>0){
                rep(j,s[i]) st.push(1);
            }
            if(g[i]<0){
                for(int x=abs(g[i]);x>0;x--){
                    if(!st.empty()) {
                        st.pop();
                        ans++;
                    }
                    else break;
                }
            }
        }
        out(ans);
    }
    
    shows(s);
    shows(g);
    
    return 0;
}
