#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
long long ma[25][25];
bool vis[25][25];

int dx[8]={-2,-2,2,2,-1,-1,1,1};
int dy[8]={-1,1,-1,1,-2,2,-2,2};

int n,m,nx,ny;
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    cin>>nx>>ny;
    vis[nx][ny]=true;
    
    for(int i=0; i<8; i++) {
    int tx = nx + dx[i];
    int ty = ny + dy[i];
	    if(tx >= 0 && tx <= n && ty >= 0 && ty <= m) 
		{
	        vis[tx][ty] = true;
	    }
	}
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    			ma[i][j]=0;
			}
		}
	ma[0][0]=1; 
	for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    		if(vis[i][j]) continue;
    	    // 只有当 i > 0 时，才去加上面的
			if (i > 0) ma[i][j] += ma[i-1][j];
			// 只有当 j > 0 时，才去加左边的
			if (j > 0) ma[i][j] += ma[i][j-1];
			}
		}
	
	cout<<ma[n][m]<<endl;
    return 0;
}

