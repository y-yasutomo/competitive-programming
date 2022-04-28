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
    int n,q ;
    cin >> n >> q ;
    vector<set<int>> a(n) ;
    rep(i,q){
        int idx ; cin >> idx ;
        if(idx==0){
            int x,y ;
            cin >> x >> y ;
            a[y].insert(x) ;
        }else{
            int z ; cin >> z ;
            if(a[z].size()>0){
                for(auto x : a[z]){
                    cout << x << ' ' ;
                }
                cout << endl ;
            }else{
                cout << "No" << endl ;
            }
        }
    }
    return 0 ;
}

