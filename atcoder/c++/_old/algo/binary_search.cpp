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
        ll n,k ;
        cin >> n >> k ;
        vector<ll> a(n) ;       
        rep(i,n){
            cin >> a[i] ;
        }

        int left = -1 ;
        int right = n ;
        int mid ;
        while (1){
            mid = (left + right)/2 ;
            if(a[mid]>=k){
                right = mid ;
            }else{
                left = mid ;
            }
            if(left==n-1 || right==0){
                break ;
            }        
            if(right-left<=1){
                cout << right << endl ;
                return 0 ;
            }
        }
        cout << -1 << endl ;
        return 0 ;
    }  