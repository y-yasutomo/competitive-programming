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
        int n ;
        string s,t ;
        cin >> n>> s >> t ;
        int ans = 0 ;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]) ans++ ;
        }
        cout << ans << endl ; 
        return 0 ;
    }  
