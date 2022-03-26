#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    string s ;
	char c ;
    cin >> s >> c ;

    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            cout << "Yes" << endl ;
            return
        }
    }

    return 0 ;
}  
