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

int fib(int n){
    int n1 = 1, n2 = 1, tmp = 1;
    REP(i, 1, n - 1){
        tmp = n1 + n2;
        n1 = n2;
        n2 = tmp;
    }
    return tmp;
}

int main(){
    ios::sync_with_stdio(false);
    //make sos
    vi sos;
    int a;
    int counter = 0;
    REP(i, 1, 46){
        a = fib(i);
        REP(j, 2, a + 1){
            if(a % j == 0){
                counter++;
            }
            if(counter >= 2){
                break;
            }
        }
        if(counter < 2){
            sos.push_back(a);
        }
        counter = 0;
    }

    int T;
    cin >> T;
    int N;
    rep(xxx, T){
        cin >> N;
        case(xxx);
        cout << fib(N) << " ";
        if(N < sos.size()){
            cout << sos[N + 1] << endl;
        }else{
            ng;
        }
    }

    return 0;
}