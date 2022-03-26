#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

vector<int> div(int n){
    vector<int> ans ;
    for(int i=1;i*i<=n;i++){
        cout << i << endl ;
        if(n%i==0){
            ans.push_back(i) ;
        }
        if(i*i != n) ans.push_back(n/i) ;
    }
    sort(ans.begin(),ans.end()) ;
    return ans ;
}

int main() {
    int n ;
    vector<int> ans = div(42) ;

    return 0 ;
}  
