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

int saikoro[5] = {1,5,3,2,4};
int naiyatsu = 6;
vi vec;

void korogasu(int vecnum){
    if(vec[vecnum] == 1){
        swap(saikoro[1], saikoro[0]);
        swap(saikoro[3], saikoro[0]);
        swap(saikoro[3], naiyatsu);
    }else if(vec[vecnum] == 2){
        swap(saikoro[2], saikoro[0]);
        swap(saikoro[4], saikoro[0]);
        swap(saikoro[4], naiyatsu);
    }else if(vec[vecnum] == 3){
        swap(saikoro[3], saikoro[0]);
        swap(saikoro[1], saikoro[0]);
        swap(saikoro[1], naiyatsu);
    }else{
        swap(saikoro[4], saikoro[0]);
        swap(saikoro[2], saikoro[0]);
        swap(saikoro[2], naiyatsu);
    }
    /*
    cout << vecnum << ": ";
    rep(i, 5){
        cout << saikoro[i] << ", ";
    }
    cout << endl;
    */
    if(vecnum + 1 == vec.size()) return;
    korogasu(vecnum + 1);
}

int main(){
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    int N;
    int a;
    rep(xxx, T){
        cin >> N;
        rep(i, N){
            cin >> a;
            vec.push_back(a);
        }
        korogasu(0);

        case(xxx);
        cout << saikoro[0] << endl;

        saikoro[0] = 1;
        saikoro[1] = 5;
        saikoro[2] = 3;
        saikoro[3] = 2;
        saikoro[4] = 4;
        naiyatsu = 6;
        vec.clear();
        
    }

    return 0;
}