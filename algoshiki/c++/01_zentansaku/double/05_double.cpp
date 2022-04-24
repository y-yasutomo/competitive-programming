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
    int n ;
    cin >> n ;
    int ans = 0 ;
    for(int i=0;i<n;i++){
        string s ;
        cin >> s ;
        bool idx = true ;
        for(int j=0;j<s.size()-1;j++){
            if(s[j]!=s[s.size()-1-j]){
                idx = false ;
            }
        }
        if(idx) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
