#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    ll x,y,z; cin>>x>>y>>z;
    vector<ll>nums = {x,y,z};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}