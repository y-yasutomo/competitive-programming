#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <set>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int h,w ;
    cin >> h >> w ;
    vector<string> s(h) ;
    rep(i,h){
        cin >> s[i] ;
    }
    int p,q ;
    cin >> p >> q ;
    int ans = 0 ;
    for (int i = 0; i < h; i++) if(s[i][q]=='#')ans++ ;
    for (int i = 0; i < w; i++) if(s[p][i]=='#')ans++ ;
    if(s[p][q]=='#')ans-- ;
    cout << ans << endl ;    
    return 0 ;
}

