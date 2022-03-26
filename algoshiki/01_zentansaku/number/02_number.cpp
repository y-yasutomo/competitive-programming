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
    cin >> n ;

    int ans = 0 ;
    for(int i=1;i<=n;i++){
        if(n%i==0) ans++ ;
    }
    cout << ans << endl ; 
    return 0 ;
}  
