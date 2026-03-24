#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main(){
    fast_io;
    int a,b,c,d,n;cin>>a>>b>>c>>d>>n;
    int minutesBeggin=(a*60)+b;
    int minutesFinal=(c*60)+d;
    int total=minutesFinal-minutesBeggin;
    int timeUse= total-n;
    int talk1 = 0;
    if(timeUse <=0){
        talk1 =0;
    }else talk1 = (timeUse+1)/2;
    int pause = minutesBeggin + talk1;
    cout<<pause/60<<" "<< pause%60<<nl;
    return 0;
}