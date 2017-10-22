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
bool isKaibun(string str){
    //cout << str << endl;
    //int length = str.size();
    //char fst = str.at(0);
    int next = 0;
    int end = str.size() - 1;
    //char last = str.at(length - 1);
    if(end <= 0) return true;
    if(str.at(0) != str.at(end)){
        if(str.at(next) == 'x'){ //前がx
            //str += "x"; //末尾にx追加
            next++;
        }else{ //前がxじゃないとき
            if(str.at(end) != 'x'){
                return false;
            }
            //str = "x" + str;//先頭にx追加
            //end--;
        }
        counter++;
    }else{
        next++;
        end--;
    }
    //cout << next << "," << end << endl;
    str = str.substr(next, end);
    
    //cout << str << endl;
    return isKaibun(str);
}

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    counter = 0;

    if(isKaibun(str)){
        cout << counter << "\n";
    }else{
        cout << -1 << "\n";
    }

    return 0;
}
