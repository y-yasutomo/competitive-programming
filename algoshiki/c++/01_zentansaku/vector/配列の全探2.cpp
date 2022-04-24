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
    int n,v ;
    int cnt = 0 ;
    cin >> n >> v ;
 
    for(int i=0;i<n;i++){
        int a ;
        cin >> a ;
        if(a>0) cnt++ ;
    }
    cout << cnt << endl ;
    return 0 ;
}  
