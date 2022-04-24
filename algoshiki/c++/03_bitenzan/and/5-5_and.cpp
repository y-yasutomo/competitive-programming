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
    int a,n ;
    cin >> a >> n ;
    int b = (1 >> n) ;
    cout << (a&b) << endl ;
    return 0 ;
}  
