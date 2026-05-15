#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fast_io;
    ll n; cin>>n;
    ll nums;cin >> nums;          
    ll sum = nums;         
    ll max = nums;         
    n--;                  
    while(n--){
        cin>>nums;
        sum += nums;
        if(nums > max){
            max = nums;    
        }
    }
    cout <<sum<<" "<< max;
    return 0;
}