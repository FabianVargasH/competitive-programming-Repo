#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    int angulo1,angulo2,angulo3;cin>>angulo1>>angulo2>>angulo3;
    if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90) cout<<"Acute"<<nl;
    else if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90)cout<<"Right"<<nl;
    else if(angulo1 > 90 || angulo2 > 90 || angulo3 > 90)  cout<<"Obtuse"<<nl;
    return 0;
}