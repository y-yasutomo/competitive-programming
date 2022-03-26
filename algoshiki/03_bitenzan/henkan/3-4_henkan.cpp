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
    int n ;
    cin >> n ;
    int ans = (1 << n) ; //2 = 0b10
    string s = "" ;
    while(ans>0){
        s += ((ans%2==0) ? '0' : '1')  ;
        ans/=2 ;
    }
    reverse(s.begin(),s.end()) ;
    cout << s << endl ;
    return 0 ;
}  
