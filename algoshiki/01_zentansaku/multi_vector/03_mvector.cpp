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
    int x,y,z ;
    cin >> x >> y >> z ;
    vector<int> a(x),b(y),c(z) ;
    rep(i,x) cin >> a[i] ;
    rep(i,y) cin >> b[i] ;
    rep(i,z) cin >> c[i] ;

    int ans = 0 ;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                if((a[i]+b[j])==c[k]) ans++ ;
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
