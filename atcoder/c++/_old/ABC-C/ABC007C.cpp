#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

int main() {
    int r,c ;
    cin >> r >> c ;
    int sy,sx,gy,gx ;
    cin >> sy >> sx >> gy >> gx ;
    sy-- ; sx--; gy--; gx-- ;
    vector<string> maze(r) ;

    rep(i,r){
        cin >> maze[i] ;
    }

    vector<int> xx = {1,0,-1,0} ;
    vector<int> yy = {0,1,0,-1} ;

    queue<pair<int,int>> q ;
    q.push({sx,sy}) ;

    pair<int,int> next ;
    int ans[r][c] ;
    ans[sy][sx] = 0 ;
    //int cnt = 0 ;
    while (!q.empty()){
        pair<int,int> now = q.front() ;
        q.pop() ;
        maze[now.second][now.first] = '#' ;
        for(int i=0;i<4;i++){
            next.first = now.first + xx[i] ;
            next.second = now.second + yy[i] ;
            if(maze[next.second][next.first]!='#'){
                ans[next.second][next.first] = ans[now.second][now.first] + 1 ;
                //cnt++ ;
                if(next.first==gx && next.second==gy){
                    cout << ans[gy][gx] << endl ;
                    return 0 ;
                }
                maze[next.second][next.first] = '#' ;
                q.push(next) ;
            }
        }
    }
    return 0 ;
}  
