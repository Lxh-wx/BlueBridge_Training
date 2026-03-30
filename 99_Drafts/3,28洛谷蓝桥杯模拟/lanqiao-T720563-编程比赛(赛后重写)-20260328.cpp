#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
vector<ll>a;


int  main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(ll i=0;i<901234;i++){
    	a.push_back(i*567890+789456);
	}
	for(ll i=0;i<500001;i++){
		a.push_back(-(i*876543+654321));
	}
	sort(a.begin(),a.end(),[](ll x,ll y){
		if(abs(x)==abs(y))return x<y;
		return abs(x)<abs(y); 
	});

	int last=500001;
	ll ans=0;
	for(ll i=0;i<a.size();i++){
		if(a[i]>0)ans+=last;
		else last--;
	}
	cout<<ans;
    return 0;
}

