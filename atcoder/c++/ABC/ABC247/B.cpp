#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    vector<string> s(n) ;
    vector<string> t(n) ;
    rep(i,n) cin >> s[i] >> t[i] ;
    bool ans = true ;
    bool c1 = true ; 
    bool c2 = true ; 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue ;
            if(s[i]==s[j] || s[i]==t[j]){
                c1 = false ;
            }
            if(t[i]==s[j] || t[i]==t[j]){
                c2 = false ;
            }
        }
        if(c1==0 && c2==0){
            ans = false ;
        }
    }
    cout << ( ans ? "Yes" : "No" ) << endl ;
    return 0 ;
}  
