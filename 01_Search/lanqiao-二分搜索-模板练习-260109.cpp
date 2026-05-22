#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int arr[100005];
int b[10005]; 

int find(int a){
	int l=1;
	int r=n; 
	while(l<r){
		
		int mid=r+l>>1;
		if(arr[mid]>=a){
			r=mid;
		}else if(arr[mid]<a){
			l=mid+1;
		}
	}
	if(arr[l]==a)
	return l;
	return -1;
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
	}
	for(int j=0;j<m;j++){
		cin>>b[j];
		cout<<find(b[j])<<' ';
	}
    return 0;
}

