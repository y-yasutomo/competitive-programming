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
    int a = 0b10001 ;
    a = ~a;
    cout << bitset<5>(a) << endl ;
    //cout << a << endl ;
    return 0 ;
}  
