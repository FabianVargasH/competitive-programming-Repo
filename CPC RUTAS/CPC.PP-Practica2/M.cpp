#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);    
int main(){
    fast_io;    
    long long x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    ll dx = x2 - x1;
    ll dy = y2 - y1;
    ll d_squared = dx*dx+dy*dy;
    double d = sqrt((double)d_squared);
    double r_sum = r1+r2;
    double r_diff = abs(r1-r2);
    if (d>r_sum) cout <<0<<nl;
    else if (d < r_diff) cout <<0<<nl;
    else if (d == r_sum) cout <<1<< nl;
    else if (d == r_diff) cout <<1<< nl;
    else if (d_squared == 0) {
        if (r1 == r2) cout <<"Infinity"<<nl;
        else cout <<0<< nl;
    }else cout <<2<< nl;
    return 0;
}