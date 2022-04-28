#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <string>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n ;
    string t ;
    map<string,int> mp ;
    cin >> n >> t ;
    rep(i,n){
        int m ; cin >> m ;
        rep(j,m){
            string s ; cin >> s ;
            mp[s]++ ;
        }
    }
    auto itr = mp.find(t) ;
    if( itr != mp.end() ) {
        cout << mp[t] << endl ;
    } else {
        cout << 0 << endl ;
    }
    return 0 ;
}

