#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
ll n,m;
ll x,y; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    x=(n+1)*(n)/2;
    y=(m+1)*(m)/2;
    int sum=x*y;
    //cout<<x<<" "<<y<<" "<<sum<<" ";
	 
    ll a=min(n,m);
    ll b=max(n,m);
    //cout<<a<<" "<<b<<" ";
	ll sum2=0;
    for(int i=0;i<a;i++){
    	sum2+=(a-i)*(b-i);
	}
	
	cout<<sum2<<" "<<sum-sum2;


    return 0;
}

