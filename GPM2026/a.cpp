#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll caseP, caseB;cin>>caseP>>caseB;
    ll price = 0;
    ll paid = 0;
    ll totalPrice = 0;
    ll totalPaid = 0;
    while(caseP--){
        cin>>price;
        totalPrice += price;
    }
    while(caseB--){
        cin>>paid;
        totalPaid += paid;
    }

    if(totalPaid >=totalPrice+(totalPrice * 0.10)){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}