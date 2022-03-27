#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    vector<int> a(2001) ;
    for(int i=0;i<n;i++){
        int temp ;
        cin >> temp ;
        a[temp]++ ;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            cout << i << endl ;
            return 0 ;
        }
    }
    return 0 ;
}  
