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

int dx[5] = {0,1,0,-1,0} ;
int dy[5] = {0,0,1,0,-1} ;

int main() {
    int h,w ;
    cin >> h >> w ;
    vector<vector<int>> grid(h,vector<int>(w,0)) ;
    int temp = 0 ;
    rep(i,h){
        string s ;
        cin >> s ;
        for(int j=0;j<s.size();j++){
            if(s[j]=='#'){
                temp++ ;
                grid[i][j] = 1 ;
            }
        }
    }
    int Q ;
    cin >> Q ;
    rep(i,Q){
        int idx,p,q ;
        cin >> idx ;
        if(idx==0){
            int p,q ;
            cin >> p >> q ;
            int ch = 0 ;
            int prev = 0 ;
            for(int j=0;j<5;j++){
                int x = p+dx[j] ;
                int y = q+dy[j] ;
                if((x < h) && (x >= 0) && (y < w) && (y >= 0)){
                    prev += grid[x][y] ;
                    grid[x][y] = 1 - grid[x][y] ;
                    ch += grid[x][y] ;
                }
            }
            temp += (ch-prev) ;
        }else{
            cout << temp << endl ;
        }
    }
    return 0 ;
}

