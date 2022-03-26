#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n,m ;
    cin >> n >> m ;
    for(int c=0;c<=n;c++){
        int a = 3*n - m + c ;
        int b = m - 2*n - 2*c ; 
        if(a>=0 && b>=0){
            cout << a << " " << b << " " << c << endl ; 
            return 0 ;
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl ; 
    return 0 ;
}  
