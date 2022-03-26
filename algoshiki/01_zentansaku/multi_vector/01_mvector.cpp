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
    int n,m ;
    cin >> n >> m ;
    vector<int> a(n),b(m) ;
    rep(i,n) cin >> a[i] ;
    rep(i,m) cin >> b[i] ;

    int ans = 0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]>b[j]) ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
