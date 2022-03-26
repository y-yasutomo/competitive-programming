#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001 ;
const int MOD = 10007 ; 

double dist(pair<double,double> s,pair<double,double> g){
    double temp = (g.first-s.first)*(g.first-s.first)+(g.second-s.second)*(g.second-s.second) ;
    return sqrt(temp) ;
}

int main() {
    int n,ng1,ng2,ng3 ;
    cin >> n >> ng1 >> ng2 >>ng3 ;
    
    if(n==ng1 || n==ng2 || n==ng3 || n>300){
        cout << "NO" << endl ;
        return 0 ;
    }

    vector<int> a(n+1) ;
    a[ng1]=a[ng2]=a[ng3] = -1 ;
    int cnt = 0 ;
    while(1){
        if(n-3<0 || a[n-3]==-1){
            if(n-2<0 || a[n-2]==-1){
                if(a[n-1]==-1){
                    cout << "NO" << endl ;
                    return 0 ;
                }else{
                    n-= 1 ;
                    cnt++ ;
                }
            }else{
                n-= 2 ;
                cnt++ ;
            }
        }else{
            n-= 3 ;
            cnt++ ;
        }
        if(n==0){
            break ;
        }
        if(cnt==100){
            cout << "NO" << endl ;
            return 0 ;
        }
    }
    cout << "YES" << endl ;
    return 0 ;
}  
