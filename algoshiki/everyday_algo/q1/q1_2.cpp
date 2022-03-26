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
    int n ;
    cin >> n ;
    int ans = 0 ;
    while(n>0){
        if(n%2==0){
            n/=2 ;
        }else{
            n-=1 ;
        }
        ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
