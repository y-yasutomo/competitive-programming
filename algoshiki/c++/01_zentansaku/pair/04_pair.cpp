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
    vector<string> s(n) ;
    rep(i,n) cin >> s[i] ; 
    bool idx = false ;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                idx = true ;
                break ;
            }
        }
    }
    cout << (idx ? "Yes" : "No") << endl ;
    return 0 ;
}  
