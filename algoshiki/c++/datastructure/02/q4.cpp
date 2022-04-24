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
    int n,idx ;
    cin >> n ;
    vector<int> a(n) ;
    int q ;
    rep(i,n) cin >> a[i] ;
    cin >> q ;
    rep(i,q){
        cin >> idx ;
        if(idx==0){
            int k,v ; cin >> k >> v ;
            a.insert(a.begin()+k,v) ;
        }else if(idx==1){
            int k,v ; cin >> k ;
            a.erase(a.begin()+k) ;
        }else{
            int cnt = 0 ;
            int v ; cin >> v ;
            rep(j,a.size()){
                if(a[j]==v) cnt++ ;
            }
            cout << cnt << endl ;
        }
    }
    return 0 ;
}

