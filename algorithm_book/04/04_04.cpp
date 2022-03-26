#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ;

//ABC 114 C
//https://atcoder.jp/contests/abc114/tasks/abc114_c

void dfs(ll n, ll cur,int idx, ll &cnt){
    if(cur>n){
        return ;
    }
    if(idx == 0b111)cnt++ ;
    //cout << cur << endl ;
    dfs(n, cur*10 + 3, idx | 0b001,cnt) ;
    dfs(n, cur*10 + 5, idx | 0b010,cnt) ;
    dfs(n, cur*10 + 7, idx | 0b100,cnt) ;
}

int main() {
    ll n ;
    cin >> n ;
    ll cnt = 0 ;
    dfs(n,0,0,cnt) ;
    cout << cnt << endl ;
}  
