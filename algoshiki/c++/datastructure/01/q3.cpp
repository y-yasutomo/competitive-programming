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
    int q ;
    cin >> q ;
    int a[10] = {3,1,4,1,5,9,2,6,5,3} ;
    int k,v ;
    rep(i,q){
        int idx ;
        cin >> idx ;
        if(idx==0){
            cin >> k ;
            cout << a[k] << endl ;      
        }else{
            cin >> k >> v ;  
            a[k] = v ;
        }
    }
    return 0 ;
}
