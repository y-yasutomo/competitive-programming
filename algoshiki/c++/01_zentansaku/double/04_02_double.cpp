#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    string s ;
    cin >> s ;
    int ans = 0 ;
    for(char i='a';i<='z';i++){
        bool idx = false ;
        for(int j=0;j<s.size();j++){
            if(s[j]==i){
                idx = true ;
                break ;
            }
        }
        if(idx) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
