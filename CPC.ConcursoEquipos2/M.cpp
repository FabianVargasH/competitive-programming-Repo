#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int r, c;cin >> r >> c;
    if(c == 1){
        cout <<1<< nl;
    } else if(r>2){
        cout <<-1<< nl;
    } else if(c==2){
        if(r == 1)cout<<1<< nl;
        else cout <<2<< nl;
    } else if(r==1){
        cout <<(c+2)/3<< nl;
    } else { 
        if(c % 2 != 0){
            cout <<(c+1)/2<< nl;
        } else {
            cout <<(c+2)/2 << nl;
        }
    }
    return 0;
}