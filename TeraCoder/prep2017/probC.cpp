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

string morus[26] = {
    ".-",  "-...", 
    "-.-.", "-..", 
    ".", "..-.", 
    "--.", "....", 
    "..", ".---", 
    "-.-", ".-..", 
    "--", "-.", 
    "---", ".--.", 
    "--.-", ".-.", 
    "...", "-", 
    "..-", "...-", 
    ".--", "-..-", 
    "-.--", "--.."
};
char letter[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


int main(){
    ios::sync_with_stdio(false);

    int T;
    int letters;
    vector<char> ans;
    string in;
    cin >> T;
    rep(xxx, T){
        cin >> letters;
        rep(i, letters){
            cin >> in;
            rep(j, 26){
                if(in == morus[j]){
                    ans.push_back(letter[j]);
                    break;
                }
            }
        }

        case(xxx);
        rep(i, ans.size()){
            cout << ans[i];
        }
        cout << endl;
        ans.erase(ans.begin(), ans.end());
    }
    return 0;
}