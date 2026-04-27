#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    string lamp = "ON";
    int loop = 5;
    int b;
    while(loop--){
        cin>>b;
        if(b == 1){
            if(lamp == "ON") lamp = "OFF";
            else lamp = "ON";   
        }
    }
    cout<<lamp<<nl;
    return 0;
}