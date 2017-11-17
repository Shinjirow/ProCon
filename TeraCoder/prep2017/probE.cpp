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

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    int W, H;
    int counter = 0;
    int xSabun;
    int ySabun;
    int m, n;
    rep(xxx, T){
        cin >> H >> W;
        char othero[H + 2][W + 2];
        rep(i,H + 2){
            rep(j, W + 2) othero[i][j] = ',';
        }
        rep(i, H){
            rep(j, W){
                cin >> othero[i + 1][j + 1];
            }
        }
        /*
        rep(i, H + 2){
            rep(j, W + 2){
                cout << othero[i][j];
            }
            cout << endl;
        }
        */

        REP(i, 1, H + 1){
            REP(j, 1, W + 1){
                if(othero[i][j] == 'B'){
                    //cout << "ここまできた" << endl;
                    REP(k, i - 1, i + 2){
                        REP(l, j - 1, j + 2){
                            //cout << k << ", " << l << endl;
                            if(othero[k][l] == '.'){
                                //cout << "ここまできた" << endl;
                                xSabun = i - k;
                                ySabun = j - l;
                                m = k + 2 * xSabun; n = l + 2 * ySabun;
                                for(;;m += xSabun, n += ySabun){
                                    //cout << m - 1 << ", " << n - 1 << endl;
                                    if(othero[m][n] == ',' || othero[m][n] == '.' || othero[m][n]  == 'X'){
                                        //cout << "はしっこか空マスにきたよ" << endl;
                                        break;
                                    }
                                    else if(othero[m][n] == 'W'){
                                        counter++;
                                        //cout << "かうんとしたよ" << endl;
                                        othero[k][l] = 'X';
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        case(xxx);
        cout << counter << endl;
        counter = 0;
    }
    
    return 0;
}