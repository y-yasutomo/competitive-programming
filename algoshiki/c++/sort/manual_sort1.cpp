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
    int n ;
    cin >> n ;
    int ans = 0 ;
    ans += n/5 ;
    ans += (n-5*(n/5)) ;
    cout << ans << endl ;
    return 0 ;
}  
