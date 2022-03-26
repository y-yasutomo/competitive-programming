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
    pair<double,double> st,gr ;
    int t,v ;
    cin >> st.first >> st.second >> gr.first >> gr.second >> t >> v ;
    
    int n ;
    cin >> n ;
    vector<pair<double,double>> p(n) ;
    rep(i,n){
        cin >> p[i].first >> p[i].second ;
    }

    rep(i,n){
        double target = dist(st,p[i]) + dist(p[i],gr) ;
        if(target<=t*v){
            cout << "YES" << endl ;
            return 0 ;
        }
    }

    cout << "NO" << endl ;
    return 0 ;
}  
