#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n ;
    int ans = -101 ;
    cin >> n ;
    for(int i=1;i<n;i++){
        int a ;
        cin >> a ;
        ans = max(a,ans) ;
    }
    cout << ans << endl ;
    return 0 ;
}  
