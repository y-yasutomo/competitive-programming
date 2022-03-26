#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int x[4] = {1,0,-1,0} ;
int y[4] = {0,-1,0,1} ;

int main() {
    int n ;
    string t ;
    cin >> n >> t ;
    int ansx = 0 ;
    int ansy = 0 ;
    int now = 0 ;

    rep(i,n){
        if(t[i]=='S'){
            ansx+=x[now] ;
            ansy+=y[now] ;
        }else{
            now+=1 ;
            if(now>=4) now = 0 ;
        }
    }
    cout << ansx << " " << ansy << endl;
 return 0 ;
}  
