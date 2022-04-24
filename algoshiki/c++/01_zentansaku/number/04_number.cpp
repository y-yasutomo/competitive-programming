#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int a,b ;
    cin >> a >> b ;
    int ans = 0 ;

    int Min = min(a,b) ;
    for(int i=1;i<=Min;i++){
        if(a%i==0 && b%i==0){
            ans = i ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
