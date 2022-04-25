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
    vector<int> a(n) ;
    rep(i,n) cin >> a[i]  ;
    reverse(a.begin(),a.end()) ;
    int q ;
    cin >> q ;
    rep(i,q){
        int idx ; cin >> idx ;
        if(idx==0){
            int v ; cin >> v ;
            a.push_back(v) ;
        }else{
            if(a.size()<1) cout << "Error" << endl ;
            else{
                cout << a.back() << endl ;
                a.pop_back() ;
            }
        }
    }
    return 0 ;
}

