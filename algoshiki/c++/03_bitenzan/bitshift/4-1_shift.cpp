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
    int a = 0b11101 ;
    bitset<5> b = a ;
    b = b >> 1 ;
    cout << b << endl ;
    return 0 ;
}  
