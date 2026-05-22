#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1000005;
int arr[INF];
int n,m;

int add(int x){
	ll sum=0;
	for(int i=1;i<=n;i++){
		if(arr[i]>x){
			sum+=arr[i]-x; 
		}
	}
	return sum;
} 

int find(){
	int l=0;
	int r=arr[n];
	while(l<r){
		int mid=r+l+1>>1;
		if(add(mid)>=m){
			l=mid;
		}else 
		r=mid-1;
	}
	return l;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
	}
	sort(arr+1,arr+1+n);
	cout<<find();
    return 0;
}

