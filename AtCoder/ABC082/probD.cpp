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

const int INF = (1 << 30);

string str;
pint goal;

bool able = false;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int i, int muki, pint cur){
    if(able) return;
    if(i == str.size()){
        if(cur.fs == goal.fs && cur.sc == goal.sc){ able = true; }
        return;
    }
    if(str[i] == 'F'){
        cur.fs += dx[muki];
        cur.sc += dy[muki];
        dfs(i + 1, muki, cur);
    }else{
        if(muki == 3){
            dfs(i + 1, 0, cur);
            dfs(i + 1, muki - 1, cur);
        }else if(muki == 0){
            dfs(i + 1, muki + 1, cur);
            dfs(i + 1, 3, cur);
        }else{
            dfs(i + 1, muki + 1, cur);
            dfs(i + 1, muki - 1, cur);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> str;
    int num = 0;
    rep(i, str.size()){if(str[i] == 'F'){num++;}}
    int a, b;
    cin >> a >> b;

    if(num < abs(a) + abs(b)){no;return 0;}

    goal = mp(a, b);
    dfs(0, 0, mp(0, 0));
    if(able){
        yes;
    }else{
        no;
    }

    return 0;
}