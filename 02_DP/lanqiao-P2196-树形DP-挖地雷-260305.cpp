#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int N[25];//地窖数组
int G[25][25];//两个地窖是否相连 
int dp[25];
int next[25];
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
	for(int i=1;i<=n;i++){
	cin>>N[i];
	dp[i]=N[i];		
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			cin>>G[i][j];
			G[j][i]=G[i][j];
		}
	}
	int start_node=0;
	dp[n]=N[n];
	int ma=-1;
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			if(G[i][j]==1){
				if(N[i]+dp[j]>dp[i]){
				dp[i]=N[i]+dp[j];
				next[i]=j;
				}
			}

		}
		if(dp[i]>ma){
			ma=dp[i];
			start_node=i;
		}
	}
	int temp=start_node;
	while(temp!=0){
		cout<<temp<<" ";
		temp=next[temp];
	}
	cout<<"\n";
	cout<<ma;


    return 0;
}

