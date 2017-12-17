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

int main(){
    ios::sync_with_stdio(false);
    string a;
    string b;
    cin >> a;
    cin >> b;
    vector<char> s1(a.size());
    vector<char> s2(b.size());
    
    rep(i, a.size()) s1[i] = a.at(i);
    
    rep(i, b.size()) s2[i] = b.at(i);

    vsort(s1);
    sort(s2.begin(), s2.end(), greater<char>());

    // rep(i, s1.size()) cout << s1[i];
    // cout << endl;
    // rep(i, s2.size()) cout << s2[i];
    // cout << endl;
    int s1leng = 0;
    int s2leng = 0;
    if(s1.size() < s2.size()){
        rep(i, s1.size()){
            s1leng += (int)s1[i];
            s2leng += (int)s2[i];
            // cout << s1leng << endl;
            // cout << s2leng << endl;
            if(s1leng < s2leng){
                yes;
                return 0;
            }else if(s1leng == s2leng){
                continue;
            }else{
                no;
                return 0;
            }
        }
    }else{
        rep(i, s2.size()){
            s1leng += (int)s1[i];
            s2leng += (int)s2[i];

            // cout << s1leng << endl;
            // cout << s2leng << endl;
            if(s1leng < s2leng){
                yes;
                return 0;
            }else if(s1leng == s2leng){
                continue;
            }else{
                no;
                return 0;
            }
        }
    }
    if(s1.size() < s2.size()){
        yes;
        return 0;
    }
    no;
    return 0;
}