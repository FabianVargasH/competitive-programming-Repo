#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    string s;
    getline(cin, s);
    int posicion = s[0] - 65 + 1;
    cout<<(posicion*2)-1<<nl;
    return 0;
}