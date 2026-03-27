#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int G[1005][1005];
int vis[1000];
 
void bfs(int v){
	vis[v]=1;
	for(int i=1;i<=n;i++){
		if(vis[i]==1)continue;
		if(G[v][i]==1){
			vis[i]=1;
			bfs(i);
		}
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	while(1){
		cin>>n;if(n==0)break;
		cin>>m;
		memset(vis,-1,sizeof(vis));
		memset(G,0,sizeof(G));
		
		for(int i=1;i<=m;i++){
			int a,b;
			cin>>a>>b;
			G[a][b]=G[b][a]=1;
		}
		
		int count=0;
		
		for(int i=1;i<=n;i++){
			if(vis[i]==-1)
			count++;
			bfs(i);
		}
		
		cout<<count-1<<"\n";
	}

    return 0;
}

