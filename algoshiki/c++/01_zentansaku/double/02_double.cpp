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
    int n,k ;
    cin >> n >> k ;
    int ans = 0 ;
    for(int i=1;i<=n;i++){
        int temp = 0 ;
        for(int j=1;j<=i;j++){
            if(i%j==0) temp++ ;
        }
        if(temp==k) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
