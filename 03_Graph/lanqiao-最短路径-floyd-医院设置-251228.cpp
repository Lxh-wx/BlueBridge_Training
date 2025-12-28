#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int G[105][105];
int W[105];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    memset(G,0x3f,sizeof(G));
    for(int i=1;i<=n;i++)
    {
    	G[i][i]=0;
	}
	
	int w,u,v;
	for(int i=1;i<=n;i++){
		cin>>w>>u>>v;
		W[i]=w;
		if(u!=0) G[i][u]=G[u][i]=1;
		if(v!=0) G[i][v]=G[v][i]=1;	
	}
	int k;
	for(k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(G[i][k]!=INF&&G[k][j]!=INF&&G[i][j]>G[i][k]+G[k][j]){
					G[i][j]=G[i][k]+G[k][j];
				}
				
			}
		}
	}
	int t=INF;
	int s=0; 
	for(int i=1;i<=n;i++){
		s=0;
		for(int j=1;j<=n;j++){
			if(G[i][j]!=INF)
			s+=G[j][i]*W[j];
		}
		if(s<t)
		t=s;
	}
	cout<<t;
    return 0;
}

