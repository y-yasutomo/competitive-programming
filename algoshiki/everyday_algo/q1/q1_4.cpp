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
    int n,m ;
    cin >> n >> m ;
    vector<int> a(n),b(m) ;
    vector<int> used(n) ;
    rep(i,n) cin >> a[i] ;
    rep(i,m) cin >> b[i] ;    
    int ans = 0 ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(used[j]==1) continue ;
            if(a[j]<=b[i]){
                ans++ ;
                used[j] = 1 ;
                break ;
                }
            }
    }
    cout << ans << endl ;
    return 0 ;
}  
