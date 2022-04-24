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
        string s,t ;
        cin >> s >> t ;
        string ans = "No" ;
        for(int i=0;i<s.size()-t.size()+1;i++){
            if(s[i]==t[0]){
                bool temp = true ;
                for(int j=1;j<t.size();j++){
                    if(s[i+j]!=t[j]){
                        temp = false ;
                    }
                }
                if(temp){
                    ans = "Yes" ;
                    break ;
                }
            }
        }
        cout << ans << endl ; 
        return 0 ;
    }  
