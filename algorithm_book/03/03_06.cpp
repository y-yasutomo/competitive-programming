#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 int k,s ;
 cin >> k >> s ;
 int ans = 0 ;
 for(int i=0;i<=k;i++){
     for(int j=0;j<=k;j++){
         if((i+j)<=s && (i+j)>=(s-k))ans++ ;
     }
 }
 cout << ans << endl ;
}  
