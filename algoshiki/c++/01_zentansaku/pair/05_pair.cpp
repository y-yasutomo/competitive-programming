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
    string s ;
    cin >> n >> s ;
    int ans = 0 ;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}  
