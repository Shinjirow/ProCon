#include "bits/stdc++.h"

#define int long long 
#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define show(e) cerr<<#e<<" = "<<e<<endl

using namespace std;
using vi=vector<int>;
using pint=pair<int,int>;

int h,w;
vi d[10];
int n;

void warshall_floyd(int v){
    rep(k,v){
        rep(i,v){
            rep(j,v){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}

signed main(){
    cin>>h>>w;
    rep(i,10){
        rep(j,10){
            cin>>n;
            d[i].pb(n);
        }
    }

    warshall_floyd(10);

    vi vec(10);
    rep(i,h){
        rep(j,w){
            cin>>n;
            if(n!=-1){
                vec[n]++;
            }
        }
    }
    int ans=0;
    rep(i,10){
        ans+=vec[i]*d[i][1];
    }
    cout<<ans<<endl;
}