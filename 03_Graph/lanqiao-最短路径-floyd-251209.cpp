#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int G[105][105];
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int u,v,w;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++)
    	{
    		if(i==j){
    			G[i][j]=0;
    			continue;
			}
    		G[i][j]=INF;

		}
	}
    for(int i=0;i<m;i++){
    	cin>>u>>v>>w;
    	G[u][v]=G[v][u]=w;
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<G[i][j]<<' ';
		}
		cout<<endl;
	}


    return 0;
}

