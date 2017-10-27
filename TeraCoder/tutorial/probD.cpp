#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    char str[65];
    cin >> N;
    int count = 1;
    cin >> str;
    rep(i, N){
        fgets(str, 65, stdin);
        rep(j, strlen(str)){
            if(str[j] == ' '){
                ++count;
            }
        }
        cout << "Case #" << i + 1 << ":\n";
        cout << count << "\n";
        count = 1;
    }

    return 0;
}