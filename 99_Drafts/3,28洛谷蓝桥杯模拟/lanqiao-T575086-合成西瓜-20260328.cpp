#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int mod =998244353;
ll T;
ll x,y; 
ll qmi(ll a,ll b){
	ll ras=1;
	while(b){
		if(b&1){
			ras=ras*a%mod;
		}
		a=a*a%mod;
		b>>=1;
	}
	return ras;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T;
    for(int i=1;i<=T;i++){
    	cin>>x>>y;
    	if(x<=y){
    		cout<<"1\n";
		}else {
			ll t=x-(y+1);
			ll ans=qmi(2,t)*(y+1)%mod;
			cout<<ans<<"\n";
		} 
	}
    return 0;
}

