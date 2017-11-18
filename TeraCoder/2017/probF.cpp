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

int field[52][52];

bool kyukinbou(int H, int W){
    int hachi = 0;
        REP(i, 1, H + 1){
            REP(j, 1, W + 1){
                if(field[i][j] == 1){
                    REP(k, i - 1, i + 2){
                        REP(l, j - 1, j + 2){
                            if(field[k][l] == 0){
                                hachi++;
                            }
                        }
                    }
                    if(hachi == 8){
                        cout << "ALIVE" << endl;
                        return true;
                    }
                    hachi = 0;
                }
            }
        }
        return false;
}

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    int W, H;
    rep(xxx, T){
        cin >> W >> H;
        rep(i, 52){
            rep(j, 52){
                field[i][j] = 0;
            }
        }
        REP(i, 1, H + 1){
            REP(j, 1, W + 1){
                cin >> field[i][j];
            }
        }
        /*
        rep(i, H + 2){
            rep(j, W + 2){
                cout << field[i][j] << ' ';
            }
            cout << endl;
        }
        */
        case(xxx);
        int turn = 0;
        bool notfound = true;
        bool kaburi;
        if(!kyukinbou(H, W)){
            for(;;++turn){
                notfound = true;
                vector<pair<int, int> > already;
                REP(i, 1, H + 1){
                    REP(j, 1, W + 1){
                        kaburi = false;
                        if(field[i][j] == 2){
                            rep(x, already.size()){
                                //cout << already[x].first << ' ' << already[x].second << endl;
                                if(already[x].first == i && already[x].second == j){
                                    kaburi = true;
                                    break;
                                }
                            }
                            if(!kaburi){
                                REP(k, i - 1, i + 2){
                                    REP(l, j - 1, j + 2){
                                        if(field[k][l] == 1){
                                            notfound = false;
                                            field[k][l]++;
                                            already.push_back(make_pair(k, l));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                
                already.erase(already.begin(), already.end());
                if(notfound) break;
            }
            cout << turn << endl;
        }
        turn = 0;
    }    
    
    return 0;
}