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

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int a, b;
    string s1, s2;
    rep(i, N){
        cin >> a >> b;
        rep(j, a){
            cin >> s1 >> s2;
            rep(k, s1.size()){
                if(s1.at(k) != s2.at(k)){
                    b--;
                }    
            }
        }
        case(i);
        if(b <= 0){
            ok;
        }else{
            ng;
        }
    }

    return 0;
}