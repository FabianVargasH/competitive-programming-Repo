#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

//ld op = x + ((-1 * x) * 2);
ll manhattan(ll x1, ll y1, ll x2, ll y2){
    ll absX = abs(x1-x2);
    ll absY = abs(y1-y2);
    ll resultManh = (absX + absY);
    return resultManh;
}

double euclidean(double x1, double y1, double x2, double y2){
    double potX = pow((x1-x2),2);
    double potY = pow((y1-y2),2);
    double sum = (potX + potY);
    double resultEucli = sqrt(sum);
    return resultEucli;
}

int main(){
    fast_io;
    ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
    cout<<manhattan(x1,y1,x2,y2)<<nl;
    cout << fixed << setprecision(10) << euclidean(x1,y1,x2,y2) << nl;
    return 0;
}