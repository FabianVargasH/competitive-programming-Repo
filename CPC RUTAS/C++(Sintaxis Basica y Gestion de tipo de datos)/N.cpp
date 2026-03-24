#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll result = 1+(n-1)%9;
    cout<<result;
    return 0;
}