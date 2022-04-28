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
    vector<int> row(h) ;
    vector<int> col(w) ;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if(s[i][j]=='#')row[i]++ ;
        }
    }
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            if(s[j][i]=='#')col[i]++ ;
        }
    }
    int Q ;
    cin >> Q ;
    rep(i,Q){
        int p,q ;
        cin >> p >> q ;
        int ans = row[p]+col[q] ;
        if(s[p][q]=='#')ans-- ;
        cout << ans << endl ;
    }
    return 0 ;
}

