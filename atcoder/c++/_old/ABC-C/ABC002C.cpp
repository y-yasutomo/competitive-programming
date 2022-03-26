#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int xa,ya,xb,yb,xc,yc ;
    double ans ; 
    cin >> xa >> ya >> xb >> yb >> xc >> yc ;
    xb -= xa ;
    xc -= xa ;
    yb -= ya ;
    yc -= ya ;

    ans = abs(xb*yc-yb*xc)/2.0 ;
    cout << printf("%.10f",ans) << endl ;
    return 0 ;
}  
