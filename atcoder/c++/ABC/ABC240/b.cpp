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
    int n ;
    cin >> n ;
    set<int> s ;
    rep(i,n){
        int a ;
        cin >> a ;
        s.insert(a) ;
    }
    cout << s.size() << endl ;    
    return 0 ;
}  
