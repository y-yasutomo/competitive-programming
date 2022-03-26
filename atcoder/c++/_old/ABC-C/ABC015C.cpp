#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int t[5][5] ;
int n,k ;
bool idx = 0 ;

void dfs(int x, int cnt){
    if(cnt==n){
        if(x==0){
            idx = 1 ;
        }
        return ;
    }
    for(int i=0;i<k;i++){
        dfs(x^t[cnt][i] ,cnt + 1) ;
    }
}

int main() {
    cin >> n >> k ;
    rep(i,n){
        rep(j,k){
            cin >> t[i][j] ;
        }
    }   
    dfs(0,0) ;

    cout << ((idx) ? "Found" : "Nothing") << endl ;
    return 0 ;
}  
