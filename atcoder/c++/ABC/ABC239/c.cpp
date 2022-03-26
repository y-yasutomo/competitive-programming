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

int mvx[8] = {1,2,2,1,-1,-2,-2,-1} ;
int mvy[8] = {2,1,-1,-2,-2,-1,1,2} ;

int main() {
    ll x1,y1,x2,y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    rep(i,8){
        int tx1 = x1+mvx[i] ; 
        int ty1 = y1+mvy[i] ; 
        rep(j,8){
            if((x2+mvx[j])==tx1 && (y2+mvy[j])==ty1){
                cout << "Yes" << endl ;
                return 0 ;
            }
        }
    }
    cout << "No" << endl ;
    return 0 ;
}  
