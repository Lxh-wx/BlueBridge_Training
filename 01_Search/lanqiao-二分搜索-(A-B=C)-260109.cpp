#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 200005; 
int n,c;
int arr[N];

int find_left(int p){
	int l=1;
	int r=n;
	while(l<r){
		int mid=l+r>>1;
		if(arr[mid]>=p){
			r=mid;
		}else if(arr[mid]<p){
			l=mid+1;
		}
	}
	return l;
}
int find_right(int p){
	int l=1;
	int r=n+1;
	while(l<r){
		int mid=l+r>>1;
		if(arr[mid]>p){
			r=mid;
		}else {
			l=mid+1;
		}
	}
	return l;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>c;
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
	}
	sort(arr+1,arr+1+n);
	long long  m=0;
	for(int j=1;j<=n;j++){
		if(arr[j]>c){
			m+=find_right(arr[j]-c) - find_left(arr[j]-c);
		}
	}
	cout<<m;

    return 0;
}

