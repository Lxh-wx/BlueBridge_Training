#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
char a[1000005];
int t;
int n; 
int x=0,y=0;
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    int ans=0;
    for(int i=1;i<=t;i++){
    	ans=0;
    	int x=0,y=0;
    	cin>>n;
    	for(int j=1;j<=n*2;j++){
    		cin>>a[j];
		}
		for(int k=2;k<=n*2;k+=2){
			if(a[k]==a[k-1])
			ans++;
			if(a[k]=='A'&&a[k-1]=='B'){
				x++;
			}else if(a[k]=='B'&&a[k-1]=='A'){
				y++;
			}
		}
		cout<<ans/2+min(x,y)<<"\n";
	}


    return 0;
}

