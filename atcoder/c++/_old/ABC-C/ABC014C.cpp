#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int n ;
    cin >> n ;
    vector<int> a(n),b(n) ;
    vector<int> color(1000002) ;
    rep(i,n){
        cin >> a[i] >> b[i] ;
        color[a[i]]+=1 ;
        color[b[i]+1]-=1 ;
    }
    
    for(int i=1;i<color.size()-1;i++){
        color[i] = color[i-1] + color[i] ;
    }

    sort(color.begin(),color.end(),greater<int>()) ;

    cout << color[0] << endl ;
    return 0 ;
}  
