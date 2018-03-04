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

ll march[5];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll ans = 0;
    int n;
    cin >> n;
    vector<string> vs(n);
    rep(i,n){ cin >> vs[i]; }
    rep(i,n){
        if(vs[i][0] == 'M'){
            march[0]++;
        }else if(vs[i][0] == 'A'){
            march[1]++;
        }else if(vs[i][0] == 'R'){
            march[2]++;
        }else if(vs[i][0] == 'C'){
            march[3]++;
        }else if(vs[i][0] == 'H'){
            march[4]++;
        }
    }
    int i = 0,j = 1,k = 2;
    while(true){
        if(i >= 2 && j >= 3 && k > 4) break;

        //cerr << i << " " << j << " " << k << endl;
        ans += march[i] * march[j] * march[k];

        if(k != 4){ 
            k++; 
        }else{
            if(j != 3){ 
                j++; 
                k = j + 1;
            }else{
                i++;
                j = i + 1;
                k = j + 1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}