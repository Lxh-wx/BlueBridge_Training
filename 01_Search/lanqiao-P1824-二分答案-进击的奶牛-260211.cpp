#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int m;
int x[200005];
int a[200005];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
   	int mx=0;
    for(int i=1;i<=n;i++){
    	cin>>x[i];
    	if(x[i]>mx){
			mx=x[i];
		}
	}
	sort(x+1,x+1+n);
	for(int i=2;i<=n;i++){
		a[i-1]=x[i]-x[i-1];

	}
	int l=1;
	int r=mx-1;
	int ans=1;
	while(l<=r){
		int mid=(r+l)/2;
		int count=1;
		ll sum=0;
		for(int i=1;i<n;i++){
			if((sum+a[i])<mid){
				sum+=a[i];
			}else{
				sum=0;
				count++;
			}
		}
		if(count>=m){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<ans;
    return 0;
}

