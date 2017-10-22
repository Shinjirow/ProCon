#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a, a + n)
#define vi vector<int>
#define vd vector<double>

using namespace std;
int counter;
string str;
bool isKaibun(int start, int end){
    if(end - start + 1 <= 1) return true;
    if(str.at(start) != str.at(end)){
        if(str.at(start) == 'x'){
            start++;
        }else{
            if(str.at(end) != 'x'){
                return false;
            }
            end--;
        }
        counter++;
    }else{
        start++;
        end--;
    }
    return isKaibun(start, end);
}

int main(){
    ios::sync_with_stdio(false);
    cin >> str;
    counter = 0;

    if(isKaibun(0, str.size() - 1)){
        cout << counter << "\n";
    }else{
        cout << -1 << "\n";
    }

    return 0;
}
