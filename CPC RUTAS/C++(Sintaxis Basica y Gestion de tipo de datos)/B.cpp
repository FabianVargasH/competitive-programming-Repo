#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
using ll = long long;
using namespace std;
#define nl '\n'

ll floorDivision (ll a, ll b){
    ll div = a/b;
    ll mod = a%b;
    if(mod!=0 && ((a<0)!=(b<0))){
        div--;
    }
    return div;
}

double floatingDivision(ll a, ll b){
    return (double)a/b;
}

ll ceil_div(ll a, ll b){
    ll div = a / b;
    ll mod = a % b;
    if(mod != 0 && ((a < 0) == (b < 0))) div++;
    return div;
}

ll mod (ll a, ll b){
    return ((a%b)+b)%b;
}

int main(){
    fast_io;
    ll a, b; cin>>a>>b;
    cout<<a+b<<nl //sum
    <<a-b<<nl // subst
    <<floorDivision(a,b)<<nl //floordiv
    <<mod(a,b)<<nl //mod
    <<a*b<<nl // mult
    <<fixed<<setprecision(6)<<floatingDivision(a,b)<<nl //floatngDiv
    <<ceil_div(a,b); // ceil

    return 0;
}



