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
    int l,r ;
    cin >> l >> r ;
    int ans = 0 ;
    for(int i=l;i<=r;i++){
        string temp = to_string(i) ;
        reverse(temp.begin(),temp.end()) ;
        if(to_string(i)==temp) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
