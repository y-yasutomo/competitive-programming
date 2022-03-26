#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    string s ;
    cin >> s ;
    set<char> st ;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]) ;
    }
    cout << st.size() << endl ;
    return 0 ;
}  
