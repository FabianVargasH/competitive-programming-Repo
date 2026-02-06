#include<bits/stdc++.h>
using namespace std;
#define nl '\n' 
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
int main () {
    fast_io;
    int h; 
    cin >> h;
    if(h == 0){
        cout << 1 << nl;
    }else if(h == 1){
        cout << 0 << nl;
    }else {
        if(h % 2 == 1){
            cout << 4; 
            h -= 1;
        }
        int ochosImprimir = h / 2;
        for(int i = 0; i < ochosImprimir; i++){
            cout << 8;
        }
        cout << nl;
    }
    return 0;
}