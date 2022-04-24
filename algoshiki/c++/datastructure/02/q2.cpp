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
    int n,idx,k ;
    cin >> n ;
    vector<int> a(n) ;
    int q ;
    rep(i,n) cin >> a[i] ;
    cin >> q ;
    rep(i,q){
        cin >> idx >> k ;
        if(idx==0){
            if(k>=0 && k<a.size()){
                cout << a[k] << endl ;
            }else{
                cout << "Error" << endl ;
            }
        }else{
            a.push_back(k) ;
         }
    }
    return 0 ;
}

