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
    vi vec[3];
    int n;
    rep(i, 3){
        rep(j, 3){
            cin >> n;
            vec[i].push_back(n);
        }
    }
    vi diff(4);
    diff[0] = vec[0][0] - vec[0][1];
    diff[1] = vec[0][1] - vec[0][2];
    diff[2] = vec[0][0] - vec[1][0];
    diff[3] = vec[1][0] - vec[2][0];
    REP(i, 1, 3){
        if(vec[i][0] - vec[i][1] != diff[0]){ no; return 0; }
    }
    REP(i, 1, 3){
        if(vec[i][1] - vec[i][2] != diff[1]){ no; return 0; }
    }
    REP(i, 1, 3){
        if(vec[0][i] - vec[1][i] != diff[2]){ no; return 0; }
    }
    REP(i, 1, 3){
        if(vec[1][i] - vec[2][i] != diff[3]){ no; return 0; }
    }
    yes;

    return 0;
}