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

int chizu[102][102];

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int a, b;
    pair<int, pair<int, int> > max = make_pair(-1,make_pair(-1, -1));
    int count = 0;
    rep(i, N){
        cin >> a >> b;
        REP(j, 1, b + 1){
            REP(k, 1, a + 1){
                cin >> chizu[j][k];
            }
        }

        REP(j, 1, b + 1){
            REP(k, 1, a + 1){
                if(chizu[j][k] == 0){
                    REP(l, j - 1, j + 2){
                        REP(m, k - 1, k + 2){
                            count += chizu[l][m];
                        }
                    }
                    //cout << j - 1 << ',' << k - 1 << "= " << count << endl;
                    if(max.first < count){
                        max.first = count;
                        max.second = make_pair(j - 1, k - 1);
                    }
                    count = 0;
                }
            }
        }
        case(i);
        if(max.first <= 0)
            ng;
        else
            cout << max.second.second << ' ' << max.second.first << "\n";
        max.first = -1;
        max.second = make_pair(-1, -1);
        memset(chizu, 0, sizeof(chizu));
    }
    return 0;
}