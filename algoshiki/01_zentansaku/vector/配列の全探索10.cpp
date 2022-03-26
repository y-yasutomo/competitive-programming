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
    vector<int> a(9) ;
    cin >> n ;
    for(int i=0;i<n;i++){
        int temp ;
        cin >> temp ;
        temp-- ;
        a[temp]++ ;        
    }

    int ans = -1 ;
    int temp2 = -1 ;

    for(int i=0;i<a.size();i++){
        if(a[i]>temp2){
            temp2 = a[i] ;
            ans = i+1 ;
        } 
    }
    cout << ans << endl ;
    return 0 ;
}  
