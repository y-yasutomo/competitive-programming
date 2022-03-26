#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int a,b ;
    cin >> a >> b ;
    for(int i=0;i<=255;i++){
        if((a^i)==b){
            cout << i << endl ;
            return 0 ;
        } 
    }    
    return 0 ;
}  
