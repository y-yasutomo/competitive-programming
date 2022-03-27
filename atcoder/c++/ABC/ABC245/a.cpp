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

int main() {
    int a,b,c,d ;
    cin >> a >> b >> c >> d ;

    if(a>c){
        cout << "Aoki" << endl ;
        return 0 ;
    }else if(a<c){
       cout << "Takahashi" << endl ;
        return 0 ;
    }else if(a==c && b<=d){
       cout << "Takahashi" << endl ;
        return 0 ;
    }else{
       cout << "Aoki" << endl ;
        return 0 ;
    }
    return 0 ;
}  
