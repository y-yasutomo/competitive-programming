#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int h,w ;
    cin >> h >> w ;
    int a[h][w] ;
    vector<int> rsum(h),csum(w) ;
    rep(i,h){
        rep(j,w){
            cin >> a[i][j] ; 
            rsum[i] += a[i][j] ; 
            csum[j] += a[i][j] ; 
        }
    }

    rep(i,h){
        rep(j,w){
            cout << rsum[i]+csum[j]-a[i][j] << ' ' ;
        }
        cout << endl ;
    }
    return 0 ;
}  
