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

vector<ull> zaihou;
vector<pair<ull, ull> > item;
vector<bool> available;
ull maxval = 0;
int n;

void solve(int num){
    ull point = 0;
    ull wallet = 0;
    ull temp_max = 0;
    int a;
    rep(i, num){
        wallet += zaihou[i];
        rep(j, n){
            if(available[j]){
                if(item[j].first > wallet) break;
                
                if(temp_max < item[j].second) {
                    temp_max = item[j].second; 
                    a = j;
                }
            }
        }
        available[a] = false;
        temp_max = 0;
    }
    //cerr << "wallet = " << wallet << endl;
    //rep(i, n){ cerr << available[i] << " ";}cerr << endl;

    temp_max = 0;
    a = 0;

    while(true){
        rep(i, n){
            if(available[i]){
                if(item[i].first > wallet) break;
                if(temp_max < item[i].second){
                    temp_max = item[i].second;
                    a = i;
                }
            }
        }
        if(temp_max == 0) break;

        point += item[a].second;
        wallet -= item[a].first;
        temp_max = 0;
        available[a] = false;
        //cerr << "bought = " << item[a].first << ", " << item[a].second << endl;
    }

    cerr << "point = " << point << endl;
    if(maxval < point) maxval = point;

    rep(i, n){ available[i] = true; }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    ull a;
    rep(i, n){
        cin >> a;
        zaihou.push_back(a);
    }
    rep(i, n){
        cin >> a;
        item.push_back(make_pair(a, NULL));
    }
    rep(i, n){
        cin >> a;
        item[i].second = a;
    }
    sort(all(item));
    rep(i, n){
        available.push_back(true);
    }

    //rep(i, n) { cerr << item[i].second << endl; }
    
    REP(i, 1, n){
        solve(i);
    }

    cout << maxval << endl;

    return 0;
}