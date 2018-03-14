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
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = ~(1 << 31);

vi lm[17];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    //vi lm[n];
    int a, b;
    rep(i, m){
        cin >> a >> b;
        a--;b--;
        lm[a].pb(b);
    }

    vi v(n);
    rep(i, n){
        v[i] = i;
    }

    ll ans = 0;
    bool f;
    int l;
    do{
        //shows(v);
        f = true;
        rep(i, n){

            rep(j, n){
                if(v[j] == i){ l = j;break; }
            }
            
            //show(l);

            rep(j, lm[i].size()){
                //show(lm[i][j]);
                rep(k, n){
                    if(v[k] == lm[i][j]){
                        //cerr << l << " " << k << endl;
                        if(l > k){f = false;break;}
                    }
                }
                if(!f){break;}
            }
        }
        if(f){ans++;}
    }while(next_permutation(all(v)));

    cout << ans << endl;

    return 0;
}