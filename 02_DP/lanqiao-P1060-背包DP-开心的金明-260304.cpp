#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int cost[30];
int weight[30];
int v;
int dp[30006]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    	cin>>cost[i]>>v;
    	weight[i]=cost[i]*v;
    //	cout<<weight[i]<<endl;
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>=1;j--){
			if(j>=cost[i])
			dp[j]=max(dp[j],dp[j-cost[i]]+weight[i]);
		}
		//cout<<dp[n]<<endl;
	}
	cout<<dp[n];
    return 0;
}

