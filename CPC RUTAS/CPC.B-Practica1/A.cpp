#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    ll n;cin>>n;
    vector<ll>nums(n);
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}