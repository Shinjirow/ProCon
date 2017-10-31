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
    int M;
    int a;
    int wins;
    cin >> N;
    rep(i, N){
        wins = 0;
        cin >> M;
        vi my;
        vi en;
        rep(j, M){
            cin >> a;
            my.push_back(a);
        }
        rep(j, M){
            cin >> a;
            en.push_back(a);
        }
        vsort(my);
        vsort(en);

        int j = 0, k = 0;
        while(true){
            //cout << my[j] << ", " << en[k] << endl;
            if(my[j] > en[k]){
                wins++;
                j++;
                k++;
            }else{
                j++;
            }
            if(j == M) break;
        }
        case(i);
        cout << wins << "\n";
    }

    return 0;
}