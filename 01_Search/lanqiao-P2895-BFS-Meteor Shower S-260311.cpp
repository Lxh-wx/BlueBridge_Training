#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int M;
int vis[310][310];
int a[310][310]; 
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>M;
    int x,y,t;
    memset(a,INF,sizeof(a));
    for(int i=0;i<M;i++){
    	cin>>x>>y>>t;
    	a[x][y]=min(a[x][y],t);
    	for(int j=0;j<4;j++){
    		int nx=x+dx[j];
    		int ny=y+dy[j];
    		if(a[nx][ny]>0){
    			a[nx][ny]=min(a[nx][ny],t);
    			continue;
			}
    		if(nx<0||nx>300||ny<0||ny>300)continue;
    		a[nx][ny]=t;
		}
	}
	memset(vis,-1,sizeof(vis));
	queue<pair<int,int>> q;
	if(a[0][0]==0){
		cout<<-1;
		return 0;
	}
	q.push({0,0});
	vis[0][0]=0;
	while(!q.empty()){
		pair<int ,int > exit;
		exit=q.front();
		q.pop();
		int ex=exit.first;
		int ey=exit.second;
		if(a[ex][ey]==INF){
			cout<<vis[ex][ey];
			return 0;
		}
		for(int i=0;i<4;i++){
			int nx=ex+dx[i];
    		int ny=ey+dy[i];
    		if(nx<0||nx>302||ny<0||ny>302)continue;
    		if(vis[nx][ny]!=-1)continue;
    		if(vis[ex][ey]+1>=a[nx][ny])continue;
    		vis[nx][ny]=vis[ex][ey]+1;
    		q.push({nx,ny});
		}
	}

	cout<<-1;
    return 0;
}

