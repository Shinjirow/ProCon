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
#include <set>
#include <unordered_map>
#include <unordered_set>

#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl

//ここからAtCoder向けdefine
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pint = pair<int,int>;

const int INF = (1 << 30);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    set<char> have;
    rep(i,s.size()){
        have.insert(s[i]);
    }

    char n='a';
    if(s.size()==26){
        vi diff(s.size());
        if(s=="zyxwvutsrqponmlkjihgfedcba"){
            cout<<-1<<endl;
            return 0;
        }
        REP(i,1,s.size()){
            diff[i]=s[i]-s[i-1];
        }
        set<char> used;
        used.insert(s[0]);
        //shows(diff);
        REP(i,1,diff.size()){
            //show(diff[i]);
            if(diff[i]!=1&&diff[i]!=-1){
                if(s[i]=='z'){
                    
                    for(char lf=s[i-1];islower(lf);lf++){
                        if(used.find(lf)==used.end()){
                            rep(j,i-1){
                                cout<<s[j];
                            }cout<<lf<<endl;
                            return 0;
                        }
                    }
                    //s[i-1]++;

                }else{
                    used.insert(s[i]);
                    for(char lf=s[i];islower(lf);lf++){
                        if(used.find(lf)==used.end()){
                            rep(j,i){
                                cout<<s[j];
                            }cout<<lf<<endl;
                            return 0;
                        }
                    }
                    //s[i]++;
                    // rep(j,i+1){
                    //     cout<<s[j];
                    // }cout<<endl;
                }
                return 0;
            }
            used.insert(s[i]);
        }

    }else{
        rep(i, 26){
            if(have.find(n)==have.end()){
                cout<<s<<n<<endl;
                return 0;
            }
            n++;
        }
    }

    return 0;
}