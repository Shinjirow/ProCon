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

int K;
int getMin(int i, int num){
    if(i > 0){

        if(num * 2 > num + K){
            num = getMin(i - 1, num + K);
        }else{
            num = getMin(i - 1, num * 2);
        }
    }
    return num;

}

int main(){
    ios::sync_with_stdio(false);
    int num = 1;
    int N;
    cin >> N;
    cin >> K;
    cout << getMin(N, num) << "\n";

    return 0;
}