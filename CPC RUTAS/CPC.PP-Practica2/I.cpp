#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
int main(){
    fast_io;
    ll a,b,c;cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>a) {
        if (a==b&&b==c)cout << "Equilateral" << endl;
        else if (a == b || b == c || a == c)cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;
    } else cout << "Invalid" << endl;
    return 0;
}