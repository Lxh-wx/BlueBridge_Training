#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
char c[105][105];
int vis[105][105];

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,1,0,-1,1,-1,1,0};


int dfs(int i,int j){
	
	for(int k=0;k<8;k++){
		int nx=i+dx[k];
		int ny=j+dy[k];
			if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && c[nx][ny] == 'W' && !vis[nx][ny]){
			vis[nx][ny]=1;
			dfs(nx,ny);				
		} 
	}
	return 0;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
		int count=0;
    	memset(c,0,sizeof(c));
    	memset(vis, 0, sizeof(vis));
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++){
    			cin>>c[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(c[i][j]=='W'&&!vis[i][j]){
					vis[i][j]=1;
					count++;
					dfs(i,j);
				}
			}
		}
		cout<<count<<"\n";


    return 0;
}

