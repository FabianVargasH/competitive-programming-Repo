#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int d;cin>>d;
    int m = (7-d)%7;
    int semanas = (365 - m)/7;
    cout<<semanas;
    return 0;
}