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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = ~(1 << 31);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vi t(n), x(n), y(n);
    rep(i, n){ cin >> t[i] >> x[i] >> y[i]; }

    int nowX = 0, nowY = 0;
    int beforeT = 0;
    rep(i, n){
        //show(t[i] - beforeT);
        //show(abs(nowX - x[i]) + abs(nowY - y[i]));
        if(t[i] - beforeT < abs(nowX - x[i]) + abs(nowY - y[i])){
            no;
            return 0;
        }else if(t[i] - beforeT == abs(nowX - x[i]) + abs(nowY - y[i])){
            nowX = x[i]; nowY = y[i];
            beforeT = t[i];
        }else{
            //show(t[i] - beforeT - abs(nowX - x[i]) - abs(nowY - y[i]));
            if((t[i] - beforeT - abs(nowX - x[i]) - abs(nowY - y[i])) % 2 == 0){
                nowX = x[i]; nowY = y[i];
                beforeT = t[i];
            }else{
                no;
                return 0;
            }
        }
    }
    yes;

    return 0;
}