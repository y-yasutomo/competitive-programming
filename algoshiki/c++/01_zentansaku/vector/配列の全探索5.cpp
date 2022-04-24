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
    int ans = 0 ;
    cin >> n ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ;
 
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
