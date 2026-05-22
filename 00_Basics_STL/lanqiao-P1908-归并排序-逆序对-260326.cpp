#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int MAXN=500005;
int n;
int a[MAXN],temp[MAXN];
int ans=0;

void merge_sort(int l,int r){
	if(l>=r) return;
	int mid=(r+l)/2;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r){
		if(a[i]<=a[j]){
			temp[k]=a[i];
			k++;
			i++;
		}else{
			temp[k]=a[j];
			ans+=(mid-i+1);
			j++;
			k++;
		} 
	}
	while(i<=mid)temp[k++]=a[i++];
	while(j<=r)temp[k++]=a[j++];
	for(int p=l;p<=r;p++) a[p]=temp[p];
} 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	
	merge_sort(1,n);
	
	cout<<ans;
	
    return 0;
}

