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
#include <bitset>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define all(e) e.begin(), e.end()
#define vi vector<int>
#define vd vector<double>

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

typedef long long ll;
typedef unsigned long long ull;

const int INF = ~(1 << 31);

using namespace std;

bitset<10> bs;
vector<bitset<10> > open;
vi earn[101];
int n;
int max = -INF;
int same;
vi value[101];

void dp(int i, bitset<10> bit_set){
    if(i == 10){
        rep(i, n){
            bitset<10> and_bits(bit_set & open[i]);
            same = and_bits.count();
            value[i].push_back(earn[0][same]);
        }
        
        return;
    }
    bit_set.set(i);
    dp(i + 1, bit_set);
    bs.reset(i);
    dp(i + 1, bit_set);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    //not solveds

    bs.reset();
    cin >> n;
    int a;
    int b;
    rep(i, n){
        b = 0;
        rep(j, 10){
            cin >> a;
            b = b | a << (9 - j);
            //cout << bitset<10>(b) << endl;
        }
        open.push_back(bitset<10>(b));
    }
    rep(i, n){
        rep(j, 11){
            cin >> a;
            earn[i].push_back(a);
        }
    }
    /*
    cerr << open[0] << endl;
    rep(i, 11){
        cerr << earn[0][i] << " ";
    }cerr << endl;
    */
    dp(0, bs);
    rep(i, n){
        cout << *max_element(all(value[i])) << endl;
    }

    return 0;
}