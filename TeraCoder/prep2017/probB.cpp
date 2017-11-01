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

char letter[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main(){
    ios::sync_with_stdio(false);
    int T;
    string s1;
    string s2;
    bool flag;
    int now;
    int zure;
    int prevzure;
    cin >> T;
    rep(i, T){
        flag = true;
        cin >> s1;
        cin >> s2;

        

        rep(j, s1.size()){
            if(s1.size() != s2.size()){
                flag = false;
                break;
            }
            rep(k, 26){
                if(s1.at(j) == letter[k]){
                    now = k;
                    break;
                }
            }
            if(j == 0){
                rep(k, 26){
                    if(s2.at(j) == letter[k]){
                        zure = k - now;
                        break;
                    }
                }
            }
            if(now + zure > 25){
                now = now + zure - 26;
            }else if(now + zure < 0){
                now = now + zure + 26;
            }else{
                now = now + zure;
            }
            //cout << now << ',';
            //cout << letter[now];
            if(letter[now] != s2.at(j)){
                flag = false;
                break;
            }
        }
        
        case(i);
        if(flag){
            ok;
        }else{
            ng;
        }
    }

    return 0;
}