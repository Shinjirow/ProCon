#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <stack>
#include <queue>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

//ここからTeraCoder向けdefine
#define ok cout << "OK" << "\n"
#define ng cout << "NG" << "\n"
#define case(i) cout << "Case #" << i + 1 << ":\n"

using namespace std;

int cand[100001];

int main(){
    ios::sync_with_stdio(false);

    int T;
    int N, C;
    int e;
    int max;
    int maxe;
    cin >> T;
    rep(i, T){
        max = 0;
        maxe = 0;
        cin >> N >> C;
        rep(j, N){
            cin >> e;
            cand[e]++;
        }
        int max = 0;
        int maxe = 0;
        REP(j, 1, C + 1){
            //cout << cand[j] << endl;
            if(cand[j] > maxe){
                max = j;
                maxe = cand[j];
            }
        }

        case(i);
        cout << max << endl;
        memset(cand, 0, sizeof(cand));
    }
    return 0;
}