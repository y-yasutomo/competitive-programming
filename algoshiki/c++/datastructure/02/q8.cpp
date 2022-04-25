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
    vector<int> b ;
    rep(i,n) cin >> a[i]  ;
    int q ;
    cin >> q ;
    rep(i,q){
        int idx ; cin >> idx ;
        if(idx==0){
            int v ; cin >> v ;
            b.push_back(v) ;
        }else if(idx==1){
            int v ; cin >> v ;
            a.push_back(v) ;
        }else{
            int k ; cin >> k ;
            if(k >= (a.size()+b.size())){
                cout << "Error" << endl ;
            }else{
                if(b.size()>k){
                    cout << b[b.size()-1-k] << endl ;
                }else{
                    cout << a[k-b.size()] << endl ;
                }
            }
        }
    }
    return 0 ;
}

