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

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    string tgt;
    cin >> tgt;

    int count = 0;
    for(int i = str.size() - 1;i >= 0;--i){
        for(int j = tgt.size() - 1;j >= 0;--j){
            //cout << str.at(i) << ',' << tgt.at(j) << "\n";
            if(tgt.at(j) == str.at(i)){
                for(int k = j; k >= 0; --k){
                    //cout << i + k - j << ',' << k << "\n";
                    //cout << str.at(i + k - j) << ',' << tgt.at(k) << "\n";
                    if(str.at(i + k - j) != '?' && str.at(i + k - j) != tgt.at(k)){
                        cout << "UNRESTORABLE" << "\n";
                        return 0;
                    }
                }
                REP(l, j, tgt.size()){
                    //cout << i + l - j << ',' << l << "\n";
                    //cout << str.at(i + l - j) << ',' << tgt.at(l) << "\n";
                    if(str.at(i + l - j) != '?' && str.at(i + l - j) != tgt.at(l)){
                        cout << "UNRESTORABLE" << "\n";
                        return 0;
                    }
                }
                str.replace(i - j, tgt.size(), tgt);
                if(i - j == 0){
                    goto fin;
                }else{
                    i = i - j;
                }
            }
        }
    }

fin:
    //cout << str << "\n";

    if(str.find(tgt) == string::npos){
        for(int i = str.size() - 1;i >= 0;--i){
            if(str.at(i) == '?'){
                count++;
            }else{
                count = 0;
            }
            if(count == tgt.size()){
                str.replace(i, tgt.size(), tgt);
                break;
            }
        }
    }
    
    if(str.find(tgt) == string::npos){
        cout << "UNRESTORABLE" << "\n";
    }else{
        rep(i, str.size()){
            if(str.at(i) == '?'){
                str.replace(i, 1, "a");
            }
        }    
        cout << str << "\n";
    }

    return 0;
}