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
    int C, L;
    int cur = 0;
    int howmany = 0;
    int tmp;
    int nokori = 0;
    rep(xxx, T){
        cin >> C >> L;
        vi carp(L);
        rep(i, L){
            cin >> carp[i];
        }
        vsort(carp);
        rep(i, carp.size()){
            nokori += carp[i];
        }
        for(;;){
            if(nokori < C) break;
            cur += carp.back();
            carp.erase(carp.end() - 1);
            for(;;){
                
                cout << cur << endl;
                rep(i, carp.size()){
                    cout << carp[i] << ", ";
                }cout << endl;
                

                if(cur >= C){
                    //cout << "counted" << endl;
                    howmany++;
                    nokori -= cur;
                    cur = 0;
                    break;
                }else{
                    if(nokori < C) break;
                    tmp = C - cur;
                    cur += *lower_bound(carp.begin(), carp.end(), tmp);
                    carp.erase(lower_bound(carp.begin(), carp.end(), tmp));
                }
                if(carp.size() == 0) break;
            }
            //cout << cur << endl;
            if(carp.size() == 0) break;
        }
        case(xxx);
        cout << howmany << endl;
        howmany = 0;
        cur = 0;
        nokori = 0;
    }

    return 0;
}