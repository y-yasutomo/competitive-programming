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
    ll n,k ;
    cin >> n >> k ;
    vector<ll> a(n),ord(n) ;
    map<ll,ll> mp ;
    ll all = k/n ;
    rep(i,n){
        cin >> a[i] ;
        ord[i] = a[i] ;
        mp[a[i]] = all ;  
    }
    sort(ord.begin(),ord.end()) ;

    ll div = k%n ;
    for(int i=0;i<div;i++){
        mp[ord[i]] += 1 ; 
    }

    rep(i,n){
        cout << mp[a[i]] << endl ;
    }
    
    return 0 ;
}  
