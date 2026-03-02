#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,p;
int a[5000005];
int diff[5000005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>p;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	diff[i]=a[i]-a[i-1];
    	//cout<<a[i]<<" "<<diff[i]<<endl;
	}
	int x,y,z;
	for(int i=0;i<p;i++){
		cin>>x>>y>>z;
		diff[x]+=z;
		diff[y+1]-=z;
		//cout<<diff[1]<<" "<<diff[2]<<" "<<diff[3]<<" "<<endl;
	}
	//cout<<a[0];
	int t=INF;
	for(int i=1;i<=n;i++){
		a[i]=(a[i-1]+diff[i]);
		if(a[i]<t){
			t=a[i];
		}
	}
	cout<<t;
	


    return 0;
}

