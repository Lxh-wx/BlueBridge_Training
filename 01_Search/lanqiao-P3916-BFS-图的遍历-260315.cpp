#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int G[10005][10005];
int vis[10005];


 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    	int x,y;
    	cin>>x>>y;
    	G[x][y]=1;
	}
	for(int i=1;i<=n;i++){
		
		memset(vis,0,sizeof(vis));
		queue<int> q;
		q.push(i);
		int ma=i;
		
		while(!q.empty()){
			int temp=q.front();
			q.pop();
			vis[temp]=1;
			for(int j=1 ;j<=n;j++)
			{
				if(vis[j]==1)continue;
				if(G[temp][j]==1){
					q.push(j);
					if(j>ma) ma=j;
				}
			}
		}
		cout<<ma<<" ";	
	} 
	

    

	
    return 0;
}

