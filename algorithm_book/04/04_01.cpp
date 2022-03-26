#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ;

int tri(int n){
    if(n==1) return 0 ;
    if(n==2) return 0 ;
    if(n==3) return 1 ;
    return tri(n-1)%MOD + tri(n-2)%MOD + tri(n-3)%MOD ;
}

int main() {
    int n ;
    cin >> n ;
    cout << tri(n)%MOD << endl ;
}  
