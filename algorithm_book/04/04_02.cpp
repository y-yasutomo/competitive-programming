#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ;

int main() {
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    a[0] = a[1] = 0 ;
    a[2] = 1 ;
    for(int i=3;i<n;i++){
        a[i] = a[i-1]%MOD + a[i-2]%MOD + a[i-3]%MOD ;
    }
    cout << a[n-1]%MOD << endl ;
}  
