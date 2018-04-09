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
string s;
vi dmg(31);
int tgt;
ll ans;
int cur;
int l;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>n;
    int a;
    rep(x,n){
        cin>>tgt>>s;
        a=0;
        ans=0;
        cur=0;
        fill(dmg.begin(),dmg.end(),0);
        //dmg.clear();
        //dmg.resize(31);
        rep(i,s.size()){
            if(s[i]=='C'){
                a++;
            }else{
                dmg[a]++;
            }
        }
        rep(i,dmg.size()) cur+=(1<<i)*dmg[i];
            
            /*rep(i,dmg.size()){
                cur+=(1<<i)*dmg[i];
            }
            show(cur);*/
            
        if(tgt<accumulate(all(dmg),0)){
            case(x+1);
            printf("IMPOSSIBLE\n");
            
            continue;
        }else if(tgt>=cur){
            case(x+1);
            printf("0\n");
            continue;
        }
        while(true){
            cur=0;
            rep(i,dmg.size()) cur+=(1<<i)*dmg[i];
            if(cur<=tgt) break;

            REV(i,0,dmg.size()-1){
                if(dmg[i]!=0) {l=i;break;}
            }
            //shows(dmg);
            dmg[l]--;
            dmg[l-1]++;
            ans++;
        }

        case(x+1);
        printf("%lld\n",ans);        
        
    }

    return 0;
}