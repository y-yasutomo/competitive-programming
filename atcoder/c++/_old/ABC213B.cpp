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
        int n ;
        cin >> n ;
        vector<pair<ll,ll>> pr(n) ;
        rep(i,n){
            ll temp ;
            cin >> temp ;
            pr[i].first = temp ;
            pr[i].second = i + 1 ;
        }
        sort(pr.begin(),pr.end(),greater<pair<ll,ll>>()) ;
        cout << pr[1].second << endl ;

        return 0 ;
    }  
