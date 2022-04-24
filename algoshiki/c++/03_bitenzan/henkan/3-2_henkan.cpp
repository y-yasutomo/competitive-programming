#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int a = 57 ;
    string ans = "" ;
    while(a>0){
        ans += ((a%2==0) ? '0' : '1') ;
        a/= 2 ;
    }
    reverse(ans.begin(),ans.end()) ;
    cout << ans << endl ;
    return 0 ;
}  
