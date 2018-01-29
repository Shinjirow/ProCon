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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

typedef long long ll;
typedef unsigned long long ull;

const int INF = ~(1 << 31);

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int hito[n + 1];
    bool deta[n + 1];
    REP(i, 1, n + 1){ deta[i] = false;}
    //REP(i, 1, n + 1){ cerr << deta[i] << endl; }
    //memset(hito, -1, sizeof(hito));
    //REP(i, 1, n + 1){ cerr << hito[i] << endl; }
    vector<pair<pair<int, int>, int> > vec(m);
    int l, r, d;
    rep(i, m){
        cin >> l >> r >> d;
        vec[i] = make_pair(make_pair(l, r), d);
    }
    if(m == 0) { yes; return 0; }
    int maxVal = -50;
    int minVal = 50;
    hito[vec[0].first.first] = 0;
    deta[vec[0].first.first] = true;
    rep(i, m){
        //cerr << "----------" << endl;REP(i, 1, n + 1){ cerr << hito[i] << ' ' << deta[i] << endl; }
        if(!deta[vec[i].first.second] || !deta[vec[i].first.first]){
            if(!deta[vec[i].first.second] && !deta[vec[i].first.first]){
                REP(j, i, m){
                    if(vec[j].first.second == vec[i].first.first){
                        if(!deta[vec[j].first.first]){ continue; }
                        else{
                            hito[vec[j].first.second] = hito[vec[j].first.first] + vec[j].second;
                            break;
                        }
                    }
                }
            }
            if(!deta[vec[i].first.second]){
                hito[vec[i].first.second] = hito[vec[i].first.first] + vec[i].second;
                //maxVal = max(hito[vec[i].first.first] + vec[i].second, maxVal);
                //minVal = min(hito[vec[i].first.first], minVal);
                deta[vec[i].first.second] = true;
            }else{
                hito[vec[i].first.first] = hito[vec[i].first.second] - vec[i].second;
                //maxVal = max(hito[vec[i].first.second], maxVal);
                //minVal = min(hito[vec[i].first.second] - vec[i].second, minVal);
                deta[vec[i].first.first] = true;
            }
        }else{
            if(hito[vec[i].first.second] == hito[vec[i].first.first] + vec[i].second){
                continue;
            }else{
                no;
                return 0;
            }
        }
        //cerr << maxVal << ' ' << minVal << endl;
        //if(maxVal - minVal > 1000000000){ no; return 0;}
    }

    // REP(i, 1, n + 1){
    //     cerr << hito[i] << endl;
    // }
    yes;

    return 0;
}