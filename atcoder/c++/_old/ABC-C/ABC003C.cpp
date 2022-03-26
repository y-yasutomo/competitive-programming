#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n,k ;
    cin >> n >> k  ;
    vector<int> r(n) ;
    double ans = 0 ; 
    rep(i,n){
        cin >> r[i] ;
    }

    sort(r.begin(),r.end(),greater<int>()) ;

    vector<int> use(k) ;    
    for(int i=0;i<k;i++) use[i] = r[i] ;
    sort(use.begin(),use.end()) ;

    for(int i=0;i<k;i++){
        ans = (ans + use[i])*0.5 ;
    }
    cout << printf("%.7f",ans) << endl ;
    return 0 ;
}  
