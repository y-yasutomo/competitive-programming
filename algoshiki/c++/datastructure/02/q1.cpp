#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <cmath>
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
    cout << a[k] << endl ;
    cout << a[n-1-k] << endl ;
    return 0 ;
}
