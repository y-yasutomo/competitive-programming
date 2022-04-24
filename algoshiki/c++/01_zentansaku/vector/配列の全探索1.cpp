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
    cin >> n >> v ;
 
    for(int i=0;i<n;i++){
        int a ;
        cin >> a ;
        if(a==v){
            cout << "Yes" << endl ;
            return 0 ;
        }
    }
    cout << "No" << endl ;
    return 0 ;
}  
