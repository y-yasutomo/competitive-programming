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
    bitset<5> a,b ;
    a = 0b10001 ;
    b = 0b00101 ;
    cout << (a|b) << endl ;
    return 0 ;
}  
