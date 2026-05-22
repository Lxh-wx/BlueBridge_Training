#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
struct dian {
	int x,y,step;
};

int n,m;
int ma[105][105];
bool vin[105][105];


int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>ma[i][j];
		}
	}
	
    dian start{1,1,0};
    queue<dian> q;
    q.push(start);
    vin[1][1]=true;
    
    while(!q.empty())
    {
    	dian now=q.front();
    	q.pop();
    	
    	if(now.x==n&&now.y==m)
    	{
    		cout<<now.step<<"\n";
    		return 0;
		}
		for(i=0;i<4;i++)
		{
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx<1||nx>n||ny<1||ny>m) continue;
			
			if(ma[nx][ny]==1) continue;
			
			if(vin[nx][ny]) continue;
			
			vin[nx][ny]=true;
			dian next={nx,ny,now.step+1};
			q.push(next);
		}
	}
	cout<<-1<<"\n";
    	return 0;
}

