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
	int ma=0;
	for(int j=n;j>=1;j--){
			int count=0;
		for(int i=n,k=j;i>=n-j+1;i--,k--){//´ÓÒ»±éÀúa 
	    	if(a[i]-b[k]>0){
	    		count++;
			}
		}	 
		if(count>ma)ma=count;	 
	}
	
	cout<<n-ma; 

    return 0;
}

