#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

//EDPC A-Frog - 01
//https://atcoder.jp/contests/dp/tasks/dp_a

int main() {
    int n ;
    cin >> n ;
    int h[n] ;
    rep(i,n) cin >> h[i] ;
    int dp[n] ;
    dp[0] = 0 ;
    for(int i=1;i<n;i++){
        if(i==1) dp[i] = abs(h[i]-h[i-1]) ;
        else dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),
        dp[i-2] + abs(h[i]-h[i-2])) ;
    } 
    cout << dp[n-1] << endl ;
}  
