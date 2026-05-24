#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int G[55][55];
int dp[55][55][55][55];
//int dx[2]={0,1}; 
//int dy[2]={1,0}; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>G[i][j];
		}
	}
	
	for(int i1=1;i1<=n;i1++){
		for(int j1=1;j1<=m;j1++){
			for(int i2=1;i2<=n;i2++){
				for(int j2=1;j2<=m;j2++){
					
					if(i1!=n||i2!=n||j1!=m||j2!=m){
						if (i1==i2&&j1==j2){
							if(i1==1&&j1==1){
								dp[1][1][1][1] = G[1][1];
								continue;
							}					      
						      continue;  
					  }
					}
					
					dp[i1][j1][i2][j2]=max({
						dp[i1-1][j1][i2][j2-1],
						dp[i1][j1-1][i2-1][j2],
						dp[i1-1][j1][i2-1][j2],
						dp[i1][j1-1][i2][j2-1]
					})+G[i1][j1]+G[i2][j2];
					
				} 
			}		
		}
	}
	cout<<dp[n][m][n][m];

    return 0;
}
