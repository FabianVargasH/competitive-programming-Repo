#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    int maxv = 0;
    for(int i = 0; i < n; i++){
        string s;cin >> s;
        if(s=="/"){
            int output = ((maxv / 10) + 1)* 10;
            cout << output <<nl;
        } else {
            int limite = stoi(s);
            cout<<limite<<nl;
            maxv=max(maxv, limite);
        }
    }
    return 0;
}