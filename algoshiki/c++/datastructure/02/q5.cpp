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
    if(n==1){
        cout << 1 << endl ;
        return 0 ;
    }
    vector<int> a(n),b(n) ;
    rep(i,n) a[i] = i+1 ;
    int idx = 0 ;
    b[0] = 1 ;
    int cnt = n ;
    cnt-- ;
    int fl = 0 ;
    while(cnt>1){
        while(fl<2){
            idx+=1 ;
            if(idx>=a.size()) idx = 0 ;
            if(b[idx]==0) fl++ ;
        }
        fl =0 ;
        b[idx] = 1 ;
        cnt-=1 ;
    }
    rep(i,n){
        if(b[i]==0) cout << i+1 << endl ;
    }
    return 0 ;
}

