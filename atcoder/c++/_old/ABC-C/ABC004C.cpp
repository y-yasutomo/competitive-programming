#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    ll n ;
    cin >> n ;
    int md = (n-1)%30 ;

    vector<int> vec = {1,2,3,4,5,6} ;
    for(int i=0;i<=md;i++){
        int temp = vec[i%5] ;
        vec[i%5] = vec[(i%5) + 1] ; 
        vec[(i%5)+1] = temp ; 
    }

    rep(i,vec.size()){
        cout << vec[i] ;
    }
    cout << endl ;
    return 0 ;
}  
