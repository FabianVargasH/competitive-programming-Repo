#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define nl '\n' 
int main(){
    int n;cin>>n;
    int s_total = 0, m_total = 0, l_total = 0;
    for(int i = 0; i < n; i++){
        char t;int x;
        cin>>t>>x;
        if(t == 'S') s_total+= x;
        else if(t == 'M') m_total+= x;
        else l_total+= x;
    }
    int total = 0;
    if(s_total > 0)total+=(s_total + 5)/6;
    if(m_total > 0)total +=(m_total + 7)/8;
    if(l_total > 0)total+=(l_total + 11)/12;
    cout << total <<nl;
    return 0;
}