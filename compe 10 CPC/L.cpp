#include <bits/stdc++.h>
using namespace std;
#define nl '\n' 
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int t = 0; cin>>t;
    while(t--){
        int primerNino, segundoNino;
        cin >> primerNino >> segundoNino; 
        int tercerNino = 14 - primerNino - segundoNino;
        cout << tercerNino << endl;
    }
    return 0;

}