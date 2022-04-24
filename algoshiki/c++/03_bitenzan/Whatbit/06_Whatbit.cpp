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
    string s = "110" ;
    int base = 1 ;
    int ans = 0 ;
    for(int i=0;i<s.size();i++){
        ans += (int(s[s.size()-1-i])-48)*base ;
        base*=2 ;
    }
    cout << ans << endl ;
    return 0 ;
}  
