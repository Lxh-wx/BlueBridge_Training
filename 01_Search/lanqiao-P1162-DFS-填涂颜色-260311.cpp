#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int a[35][35];
int vis[35][35];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y){
	vis[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(!(nx>=1&&nx<=n+2&&ny>=1&&ny<=n+2))continue;
		if(vis[nx][ny])continue;
		dfs(nx,ny);
	}
} 


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //输入部分 
    cin>>n;
    for(int i=2;i<=n+1;i++){
    	for(int j=2;j<=n+1;j++){
    		cin>>a[i][j];
    		if(a[i][j])vis[i][j]=2;
		}
	}
	//搜索标记部分 

			dfs(1,1);

	//输出部分 
	for(int i=2;i<=n+1;i++){
		for(int j=2;j<=n+1;j++){
			if(vis[i][j]==0){
				cout<<2<<" ";
			}else{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<"\n";
	}


    return 0;
}

