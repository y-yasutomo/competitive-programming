#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

void rc(int n){
    if(n==1){
        cout << 1 << ' ' ;
        return ;
    }else{
        rc(n-1) ;
        cout << n << ' ' ;
        rc(n-1) ;
    }
}

int main() {
    int n ;
    cin >> n ;
    rc(n) ;
}  
