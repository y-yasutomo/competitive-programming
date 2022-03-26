#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n,m ;
    cin >> n >> m ;
    map<int,int> mp ;
    rep(i,n){
        int a ;
        cin >> a ;
        mp[a]+=1 ;
    }
    rep(i,m){
        int b ;
        cin >> b ;
        if(mp[b]==0){
            cout << "No" << endl ;
            return 0 ;
        }
        mp[b]-=1 ;
    }
    cout << "Yes" << endl ;    
    return 0 ;
}  
