    #include <iostream>
    #include <algorithm>
    #include <vector>
    #include <map>
    using namespace std;
    using ll = long long ;
    #define rep(i,n) for (int i=0; i < (n); ++i)
    const int INF = 1001001001 ;
    const int MOD = 10007 ; 

    int main() {
        ll d,n,m ;
        cin >> d >> n >> m ;
        vector<ll> s(n) ;
        vector<ll> t(m) ;
        rep(i,n-1){
            cin >> s[i] ;
        }
        rep(i,m){
            cin >> t[i] ;
        }
        s.push_back(d) ;
        sort(s.begin(),s.end()) ;
        ll ans = 0 ;

        for(int i=0;i<t.size();i++){
            int left = -1 ;
            int right = n+1 ;
            int mid ;
            while(left<right){
                mid = (left + right)/2 ;
                if(right-left == 1){
                    ans+= min(abs(t[i]-s[left]),abs(t[i]-s[right])) ;
                    break ;
                }else if(t[i]==s[mid]){
                    break ;
                }else if(t[i]<s[mid]){
                    right = mid ;
                }else{
                    left = mid ;
                }
            }
        }
        cout << ans << endl ;
        return 0 ;
    }  