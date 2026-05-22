#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n;
int s[210];
int f[210][210];
int g[210][210];
int a[210];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	a[i+n]=a[i];
	}
	
	for(int i=1;i<=2*n;i++){
		s[i]=s[i-1]+a[i];
		f[i][i]=0;
		g[i][i]=0;
	}
	
	for(int len=2;len<=n;len++){
		for(int i=1;i<=2*n-len+1;i++){
			int j=i+len-1;
			f[i][j]=INF;
			g[i][j]=0;
			for(int k=i;k<j;k++){
				f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);
				g[i][j]=max(g[i][j],g[i][k]+g[k+1][j]+s[j]-s[i-1]);		
			}
		}
	}
	int ans2=INF,ans1=0;
	for(int i=1;i<=n;i++){
		ans2=min(ans2,f[i][i+n-1]);
    	ans1=max(ans1,g[i][i+n-1]); 
	}
	cout<<ans2<<endl<<ans1;
    return 0;
}

