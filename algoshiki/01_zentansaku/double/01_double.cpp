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
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    for(int i=0;i<n;i++){
        cin >> a[i] ;
    }

    int ans = 0 ;
    for(int i=0;i<n;i++){
        if(a[i]==1) continue ;
        bool temp = true ;
        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                temp = false ;
            }
        }
        if(temp) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
