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

#define REP(i,a,n) for(ll i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(ll i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
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

const int INF = (1 << 30);

vector<ull> a(2000000000);

ull table(ull x){
    return x * (x+1)/2;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    //sとgは1回ずつ、継ぎ目はn-1回、真ん中はn回
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ull> v;
    int a=0;
    if(s[0]!='A'){
        v.pb(0);    
    }
    
    rep(i,s.size()){
        if(s[i]=='A'){
            a++;
        }else{
            if(a!=0) {v.pb(a);a=0;}
        }
    }
    v.pb(a);
    //shows(v);

    ull ans=0;
    if(v.size()==1){
        ans+=table(v[0]*n);
        cout<<ans<<endl;
        return 0;
    }

    ans+=table(v[0]);ans+=table(v.back());
    ans+=(table(v[0]+v.back()))*(n-1);
    REP(i,1,v.size()-1){
        ans+=table(v[i])*n;
    }
    cout<<ans<<endl;

    return 0;
}