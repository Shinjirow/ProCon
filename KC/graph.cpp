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

using namespace std;


//not solved
struct Node{
    int edge;
    vi to;
};

int n;

int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    int to;
    Node n;
    vector<Node> vec;

    rep(i, n){
        cin >> n.edge >> to;
        n.to.push_back(to);
        
    }
    
    return 0;
}