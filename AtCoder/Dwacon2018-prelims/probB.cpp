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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int a = 0, b = 0;
    for(int i = 0;i < s.size();i++) (s[i] == '2') ? a++ : b++;
    if(a != b){
        cout << -1 << endl;
        return 0;
    }

    bool f = true;

    for(int i = 0;i < s.size();i += 2){
        if(s[i] == '2' && s[i + 1] == '5'){
            continue;
        }else{
            f = false;
            break;
        }
    }
    if(f){
        cout << 1 << endl;
        return 0;
    }

    int cnt = 1;

    char vc[2525];
    int j;

    char tmp = s[0];
    
    while(true){
        
        /*
        cout << s << endl;
        cout << s.size() << endl;
        */

        if(s[s.size() - 1] == '2'){
            cout << -1 << endl;
            return 0;
        }
        if(s.size() % 2 != 0){
            cout << -1 << endl;
            return 0;
        }
        
        f = true;
        for(int i = 0;i < s.size();i += 2){
            if(s[i] == '2' && s[i + 1] == '5'){
                continue;
            }else{
                f = false;
                break;
            }
        }
        if(f) break;

        j = 0;
        tmp = s[0];
        memset(vc, 0, sizeof(vc));
        REP(i, 1, s.size()){
            if(s[i] == tmp){
                vc[j] = s[i];
                j++;
            }else{
                tmp = s[i];
            }
        }
        vc[j] = '\0';
        s = vc;

        cnt++;
    }
    if(s.size() == 1){
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0;i < s.size();i += 2){
        if(s[i] == '2' && s[i + 1] == '5'){
            continue;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }

    cout << cnt << endl;

    return 0;
}