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
vector<char> vec;
int counter;
bool isKaibun(){
    if(strlen(ary) <= 1) return true;
    if(fst != last){
        if(fst == 'x'){ //前がx
            //str += "x";
            str = str.substr(1, length - 1);
        }else{ //前がxじゃないとき
            if(last != 'x'){
                return false;
            }
            str = str.substr(0, length - 2);
            //str = "x" + str;
        }
        counter++;
    }else{
        str = str.substr(1, length - 2);
    }
    
    //cout << str << endl;
    return isKaibun(str);
}

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    vec.push_back();
    counter = 0;

    if(isKaibun(ary)){
        cout << counter << "\n";
    }else{
        cout << -1 << "\n";
    }

    return 0;
}
