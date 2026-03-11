#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
char c[310][310];
map<pair<int ,int >,pair<int ,int >> mp;
pair<int ,int > temp[31]; 
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int vis[310][310];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sta_x,sta_y;
    //输入数据
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c[i][j];
			if(c[i][j]=='@'){
				sta_x=i;sta_y=j;//开始点 
			}
			//滑梯间映射 
			if(c[i][j]>='A'&&c[i][j]<='Z'){
				int id=c[i][j]-'A';
				if(temp[id].first==0){
					temp[id]={i,j};
				}else{
					 mp[temp[id]]={i,j};
					 mp[{i,j}]=temp[id];
				}
			}
		}
	}
	memset(vis,-1,sizeof(vis)); 
	queue<pair<int ,int >> node;
	node.push({sta_x,sta_y});
	vis[sta_x][sta_y]=0;
	while(!node.empty()){
		temp[30]=node.front();
		node.pop();
		
		if(c[temp[30].first][temp[30].second]=='='){
			cout<<vis[temp[30].first][temp[30].second];
			return 0;
		}
		
		for(int i=0;i<4;i++){
			
			int nx=temp[30].first+dx[i];
			int ny=temp[30].second+dy[i];
			
			if(nx<1||nx>n||ny<1||ny>m) continue;
			if(c[nx][ny]=='#')continue;
			if(c[nx][ny]>='A'&&c[nx][ny]<='Z'){
				if(vis[mp[{nx,ny}].first][mp[{nx,ny}].second]==-1){
				node.push(mp[{nx,ny}]);
				vis[mp[{nx,ny}].first][mp[{nx,ny}].second]=vis[temp[30].first][temp[30].second]+1;
				continue;
				}
			}
			if(vis[nx][ny]==-1){
				vis[nx][ny]=vis[temp[30].first][temp[30].second]+1;
				node.push({nx,ny});
			}
		}	
	} 
    return 0;
}

