#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

//EDPC A-Frog - 01
//https://atcoder.jp/contests/dp/tasks/dp_a

int res = INF ;
vector<int> h ;

void func(int i){
    if(i<2) res = abs(h[i]-h[i-1]) ;
    else res += min(abs(h[i]-h[i-1]),abs(h[i]-h[i-2])) ;
}


int main() {
    int n ;
    cin >> n ;
    rep(i,n) cin >> h[i] ;

}  
