#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int cuatros(int h, int m) {
    int cont = 0;
    if (h / 10 == 4) cont++;  
    if (h % 10 == 4) cont++; 
    if (m / 10 == 4) cont++;  
    if (m % 10 == 4) cont++; 
    return cont;
}
int main(){
    fast_io;
    int h, m;cin >> h >> m;
    int total = 0;
    if (h >= 8 && h <= 20) total += cuatros(h, m);
    int sigH = h;
    int sigM = m + 1;
    if (sigM == 60) {
        sigM = 0;
        sigH++;
        if (sigH == 24) sigH = 0;
    }
    if (sigH >= 8 && sigH <= 20) total += cuatros(sigH, sigM);
    cout << total << nl;
    return 0;
}