#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

ll solve(vector<ll>&nums){
    ll ans = 0;
    for(ll x:nums){
        ans^=x;
    }
    return ans;
}

int main (){
    fast_io;
    vector<ll>nums(5);
    for(int i = 0; i<5;i++){
        cin>>nums[i];    
    }
    cout<<solve(nums)<<nl;
    return 0;
}