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
    ll x ;
    cin >> x ;
    cout << ((x>0) ? x/10 : -(abs(x)+10-1)/10) << endl ;    
    return 0 ;
}  
