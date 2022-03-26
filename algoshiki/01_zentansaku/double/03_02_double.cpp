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
        bool idx = true ;
        string temp = to_string(i) ;
        for(int j=0;j<temp.size();j++){
            if(temp[j]!=temp[temp.size()-j-1]) idx = false ; 
        }
        if(idx) ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}  
