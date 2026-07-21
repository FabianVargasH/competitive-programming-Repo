#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 

int main(){
    fast_io;
    map<int,string> t;
    t[0]="New";
    for(int i=1;i<=4;i++){
        t[i]="Crescent";
    } 
    for(int i=5;i<=8;i++){
        t[i]="Quarter";
    } 
    for(int i=9;i<=13;i++){
        t[i]="Gibbous";
    } 
    t[14]="Full";
    for(int i=15;i<=19;i++){
        t[i]="Gibbous";
    } 
    for(int i=20;i<=22;i++){
        t[i]="Quarter";
    } 
    for(int i=23;i<=27;i++){
        t[i]="Crescent";
    } 
    ll n; cin>>n;
    vector<string>obs(n);
    for(int i = 0; i < n; i++)cin>>obs[i];
    for(int d = 1; d <= 28; d++){
        int day = 0;
        bool y=true;
        for(int i = 0; i < n; i++){
            day+=d;
            if(t[day % 28] !=obs[i]){y=false;break;}
        }
        if(y){cout<<d<<nl;return 0;}
    }
    return 0;
}    