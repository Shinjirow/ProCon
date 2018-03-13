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

string src, tgt;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> src;
    cin >> tgt;

    bool t = false;
    bool f = false;
    vi ansptn;

    rep(i, src.size() - tgt.size() + 1){
        if(src[i] == '?' || src[i] == tgt[0]){
            f = true;
            REP(j, 1, tgt.size()){
                if(src[i + j] != '?' && src[i + j] != tgt[j]){ 
                    //cerr << j << ", break" << endl;
                    f = false;
                    break; 
                }
            }
            if(f){
                t = true; 
                ansptn.pb(i);
            }
        }
    }

    if(t){
        sort(rall(ansptn));
        src.replace(ansptn[0], tgt.size(), tgt);
        rep(i, src.size()){
            if(src[i] == '?'){
                src.replace(i, 1, "a");
            }
        }
        cout << src << endl;
    }else{ cout << "UNRESTORABLE" << endl; }

    return 0;
}