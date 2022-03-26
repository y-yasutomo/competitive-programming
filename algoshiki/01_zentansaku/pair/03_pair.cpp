#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ; 
    int ans = 0 ;
    for(int i=0;i<n;i++){{
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(max(a[i],max(a[j],a[k]))==a[j]) ans++ ;
            }
        }
    }
    }
    cout << ans << endl ;
    return 0 ;
}  
