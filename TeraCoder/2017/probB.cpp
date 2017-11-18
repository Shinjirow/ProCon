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
    int N;
    string str;
    string name;
    string type;
    int howmany = 0;
    rep(xxx, T){
        case(xxx);
        cin >> N;
        rep(i, N){
            cin >> str;
            rep(i, str.length()){
                if(str.at(i) == ':'){
                     name = str.substr(0, i);
                     type = str.substr(i + 1, str.length() - 1);
                    if(type == "Friend"){
                        cout << name << endl;
                        howmany++;
                    }
                    break;
                }
            }
        }
        if(howmany == 0){
                cout << "Not Friends" << endl;
            }
            howmany = 0;
    }

    return 0;
}