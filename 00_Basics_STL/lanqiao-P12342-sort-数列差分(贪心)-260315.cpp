#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int a[100005];
int b[100005];
int c[100005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
    	cin>>b[i];
	}	 	 
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	int i=1,j=1;
	int count=0;
	while(i<=n&&j<=n){
		if(a[i]>b[j]){
			i++;
			j++;
		}else{
			i++;
			count++;
		}
	}
	cout<<count;
    return 0;
}

