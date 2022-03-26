#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;
int ans = INF ;

int div(int target){
    int cnt = 0 ;
    while (target%2==0)
    {
        target/=2 ;
        cnt++ ;
    }
    return cnt ;
}

int main() {
 int n ;
 vector<int> a(n) ;
 cin >> n ;
 rep(i,n) cin >> a[i] ;
 int ans = INF ;
 rep(i,n){
     ans = min(ans,div(a[i])) ;
 }
 cout << ans << endl ;
}  
