#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
ll a,b,p;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b>>p;
    cout<<a<<'^'<<b<<' '<<"mod"<<' '<<p<<'=';
    ll ras=1;
    while(b>0){
        if(b&1){
            ras=(ras*(a%p))%p;
        }
        a=a*a%p;
        b>>=1;
    }
    cout<<ras;
    return 0;
}
