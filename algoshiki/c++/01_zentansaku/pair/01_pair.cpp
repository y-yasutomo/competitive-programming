#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n,k ;
    cin >> n >> k ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ;
    int ans = 0 ;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])<=k) ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
