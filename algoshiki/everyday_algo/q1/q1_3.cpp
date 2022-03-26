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
    int x,a0,a1,a2,a3 ;
    cin >> x >> a0 >> a1 >> a2 >> a3 ;
    int ans = 0 ;
    ans += min(x/50,a0) ; 
    x-= ans*50 ;

    ans += min(x/10,a1) ; 
    x-= min(x/10,a1)*10 ;

    ans += min(x/5,a2) ; 
    x-= min(x/5,a2)*5 ;

    ans += min(x/1,a3) ; 
    x-= min(x/1,a3)*1 ;

    cout << ans << endl ;
    return 0 ;
}  
