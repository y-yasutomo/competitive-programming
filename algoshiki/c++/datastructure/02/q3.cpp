#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <stack>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ;
    int q ;
    cin >> q ;
    rep(i,q){
        int idx ; cin >> idx ;
        if(idx==0){
            int v ; cin >> v ;
            a.push_back(v) ;
        }else{
            if(a.size()>0){
                cout << a.back() << endl ;
                a.pop_back() ;
            }else{
                cout << "Error" << endl ;
            }
         }
    }
    return 0 ;
}

