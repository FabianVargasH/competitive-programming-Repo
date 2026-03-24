#include <bits/stdc++.h>
using namespace std;
typedef long double ld;

ld absoluteValor(ld x){
    if(x > 0){
        return x;
    } else {
        ld op = x + ((-1 * x) * 2);
        return op;
    }
}

ld squareRoot(ld x){
    ld valAbs = absoluteValor(x);
    ld raiz = sqrtl(valAbs);
    return truncl(raiz * 100.0L) / 100.0L;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ld x;cin>>x;
    cout << fixed << setprecision(2) << absoluteValor(x) << "\n";
    cout << fixed << setprecision(2) << squareRoot(x) << "\n";
    cout << fixed << setprecision(0) << floorl(x) << "\n";
    cout << fixed << setprecision(0) << ceill(x) << "\n";
    cout << fixed << setprecision(0) << roundl(x) << "\n";

    return 0;
}
