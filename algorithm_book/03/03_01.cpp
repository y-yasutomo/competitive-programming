#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 int n ;
 int v ;
 vector<int> a(n) ;
 cin >> n >> v ;
 rep(i,n) cin >> a[i] ;
 int ans = 10 ;
 rep(i,n){
     if(a[i]==v){
         ans = min(ans,i) ;
     }
 }
 cout << ans << endl ;
}  
