#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
struct dian{
	int x,y,step;
};
int n,m,a,b;
int ma[405][405];
bool vis[405][405];

int dx[8]={-1,-1,1,1,-2,-2,2,2};
int dy[8]={-2,2,-2,2,-1,1,-1,1};

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<405;i++)
	{
		for(int j=0;j<405;j++)
		{
			ma[i][j]=-1;
		}
	 }
	 cin>>a>>b;
	 dian start{a,b,0};
	 queue<dian> q;
	 q.push(start);
	 vis[a][b]=true;
	 ma[a][b]=start.step;
	 while(!q.empty()){
	 	dian now=q.front();
	 	q.pop();
	 	for(int i=0;i<8;i++){
	 		int nx=now.x+dx[i];
	 		int ny=now.y+dy[i];
	 		
	 		if(nx<1||nx>n||ny<1||ny>m) continue;
	 		if(vis[nx][ny]==true) continue; 
	 		
	 		vis[nx][ny]=true;
	 		dian next={nx,ny,now.step+1};
	 		ma[nx][ny]=next.step;
	 		q.push(next);
	 		
		 }
	 }
	 for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		{
			cout<<ma[i][j]<<" ";
		}
		cout<<endl;
	 }
    return 0;
}

