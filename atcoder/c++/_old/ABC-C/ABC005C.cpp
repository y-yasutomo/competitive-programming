#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int t,n ;
    cin >> t >> n ;
    queue<int> a ;
    rep(i,n){
        int aa ;
        cin >> aa ;
        a.push(aa) ;
    } 
    int m ; 
    cin >> m ;
    vector<int> b(m) ;
    rep(i,m) cin >> b[i] ;

    for(int i=0;i<m;i++){
        while(1){
            if(a.empty()){
                cout << "no" << endl ;
                return 0 ;
            }
            int temp = a.front() ;
            a.pop() ;
            if(b[i]<=(temp+t) && b[i]>=temp){
                break ;
            }
        }
    }

    cout << "yes" << endl ;
    return 0 ;
}  
