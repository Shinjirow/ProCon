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

//ここからAtCoder向けdefine
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

using namespace std;

int x, y;
vector<char> vc;

void dfs(pair<int, int> cur, int i, int muki){
    cout << cur.first << ',' << cur.second << ", muki = " << muki << endl;
    if(vc.size() == i){
        if(cur.first == x && cur.second == y){
            yes;
            return;
        }
        else{
            no;
            return;
        }
    }
    if(vc[i] == 'F'){
        if(muki == 0){
            --cur.second;
        }else if(muki == 1){
            ++cur.first;
        }else if(muki == 2){
            ++cur.second;
        }else{
            --cur.first;
        }
        dfs(cur, ++i, muki);
    }else{
        //cout << "T comes" << endl;
        if(muki == 3){
            dfs(cur, ++i, 0);
        }else{
            int m = muki;
            dfs(cur, ++i, ++m);
        }

        if(muki == 0){
            dfs(cur, ++i, 3);
        }else{
            int m = muki;
            dfs(cur, ++i, --m);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    cin >> x >> y;
    rep(i, s.size()){
        vc.push_back(s.at(i));
    }
    dfs(make_pair(0, 0), 0, 1);

    return 0;
}