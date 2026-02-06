#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int t; cin >> t;
    while(t--){
        int contador = 0;
        int n; cin>>n;
        vector<int>ranting(n);
        vector<int>cookies(n,1);
            for(int i = 0;i<n;i++){
                cin>>ranting[i];
            }
            for(int i = 1;i<n;i++){
                if(ranting[i]>ranting[i-1]){
                    cookies[i] = cookies[i-1]+1;
                }
            }
            for (int i = 0; i < n; i++)
            {
                contador+=cookies[i];
            }
        cout<<contador<<nl;
    }
return 0;
}