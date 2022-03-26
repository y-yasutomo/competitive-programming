#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 string s ;
 cin >> s ;
 ll ans = 0 ;
 for(int bit = 0 ;bit<(1 << s.size()-1);bit++){
    ll temp = 0 ;
    for(int i=0;i<s.size()-1;i++){
        temp *= 10 ;
        temp += (s[i] - '0') ;
        if(bit & (1<<i)){
            ans += temp ;
            temp = 0 ;
        }
    }
        temp *= 10;
        temp += s.back() - '0';
        ans += temp;  
 }
 cout << ans << endl ;
}  
