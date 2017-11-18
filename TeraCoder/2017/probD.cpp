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
    int N, F, P;
    double detenai = 1.0;
    int howmany = 1;
    double oneIjou = 0.0;
    double per;
    rep(xxx, T){
        cin >> N >> F >> P;
        for(;;howmany++){
            for(int i = N;i > N - F;--i){
                //deta = (howmany / i) * detenaihito;
                //detenaihito = 1 - deta;
                oneIjou = ((double)howmany / (double)i) * detenai;
                detenai -= oneIjou;
                //cout << "deta = " << oneIjou << endl;
                //cout << "detenai = " << detenai << endl;
            }
            per = (1.0 - detenai) * 100;
            oneIjou = 0.0;
            detenai = 1.0;
            if(per >= P)
                break;
        }
        case(xxx);
        cout << howmany << endl;
        howmany = 1;
    }
    return 0;
}