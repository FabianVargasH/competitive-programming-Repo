#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n'
 
int main(){
    fast_io;
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        if (n <= 3){
            cout << n<<nl;
        }else{
          cout << (n % 2)<<nl;  
        }
    }
    return 0;
}