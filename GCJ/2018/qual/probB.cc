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

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define case(i) printf("Case #%d: ",i);


using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = (1 << 30);

int n;
int max_n=100000;
vector<pair<int,bool> > vec(max_n+1);
vector<pair<int,bool> > sb(max_n+1);
int a;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>n;
    rep(i,n){
        fill(all(vec), mp(0,true));
        scanf("%d",&a);
        rep(j,a){
            scanf("%d",&vec[i].fs);
            if(j%2==0) vec[i].sc=false;
        }
        sb=vec;
        sort(all(vec));
    }

    return 0;
}