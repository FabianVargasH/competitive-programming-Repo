#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll a, b, c;
    cin >> a >> b >> c;
    int m;
    cin >> m;
    vector<ll> usb; 
    vector<ll> ps2;
    for(int i = 0; i < m; i++){
        ll v; string t;
        cin >> v >> t;
        if(t == "USB"){
            usb.push_back(v);
        } else{
            ps2.push_back(v); 
        } 
    }
    sort(usb.begin(), usb.end());
    sort(ps2.begin(), ps2.end());
    int nu = usb.size(); 
    int np = ps2.size();
    vector<ll> pU(nu+1, 0); 
    vector<ll>pP(np+1, 0);
    for(int i = 0; i < nu; i++){
        pU[i+1] = pU[i] + usb[i];
    } 
    for(int i = 0; i < np; i++){
        pP[i+1] = pP[i] + ps2[i];
    } 
    ll tU = min((ll)nu, a);
    ll tP = min((ll)np, b);
    ll remU = nu - tU;
    ll remP = np - tP;
    ll d = min(c, remU + remP);
    ll iMin = d - remP;
    if(iMin < 0){
        iMin = 0;
    } 
    ll iMax = remU;
    if(iMax > d){
        iMax = d;
    } 
    ll minExtra = 0;
    bool first = true;
    for(ll i = iMin; i <= iMax; i++){
        ll j = d - i;
        ll cost = (pU[tU+i] - pU[tU]) + (pP[tP+j] - pP[tP]);
        if(first || cost < minExtra){
            minExtra = cost;
            first = false;
        }
    }
    ll totalCount = tU + tP + d;
    ll totalCost  = pU[tU] + pP[tP] + minExtra;
    cout << totalCount << " " << totalCost << nl;
    return 0;
}