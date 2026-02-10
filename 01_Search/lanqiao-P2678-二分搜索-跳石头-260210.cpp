#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int length,n,m;
int a[50005];
int d[50005];
int l,r,mid; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>length>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	d[n+1]=length-a[n];
	l=1;r=length;

	while(l<=r){
		mid=(r+l)/2;
		int tmp=0,count=0; 
		for(int i=1;i<=n+1;i++){
			tmp+=d[i];
			if(tmp<mid){
			count++;
			}else {
				tmp=0;
			}
		}
		if(count<=m){
			l=mid+1;
		}else r=mid-1; 

	}
	cout<<r;
    return 0;
}

