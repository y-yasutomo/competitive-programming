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

    for(int i=0;i<a.size();i++){
        cout << a[i] << endl ;
    }
    return 0 ;
}  
