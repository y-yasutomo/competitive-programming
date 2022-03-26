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
        cin >> s ;
        int ans = 0 ;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) ans++ ;
        }
        cout << ans << endl ; 
        return 0 ;
    }  
