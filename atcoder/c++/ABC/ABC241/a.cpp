#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    vector<int> a(10) ;
    rep(i,10) cin >> a[i] ;
    int ans = a[0] ;
    rep(i,2){
        ans = a[ans] ;
    }
    cout << ans << endl ;
    return 0 ;
}  
