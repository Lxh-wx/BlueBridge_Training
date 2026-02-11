#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int a[100005]; 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    ll sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]>mx){
    		mx=a[i];
		}
    	sum+=a[i];
	}
	int r=sum;
	int l=mx;
	int ans=sum;
	while(l<=r){
		int mid=(r+l)/2;
		ll sum2=0;
		int count=1;
		for(int i=0;i<n;i++){
			if(sum2+a[i]<=mid){
				sum2+=a[i];
			}else{
				count++;
				sum2=a[i];
			}
		}
		if(count<=m){
			ans=mid;
			r=mid-1;
		}else {
			l=mid+1;
		}
	}
	cout<<ans;

    return 0;
}

