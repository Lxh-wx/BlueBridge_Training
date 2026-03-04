#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int s[5];
int N[25];
int dp[1205];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>s[1]>>s[2]>>s[3]>>s[4];//输入题目数
	int ans=0;
	 for(int i=1;i<=4;i++){
	 	int sum=0;
	 	for(int j=1;j<=s[i];j++){
	 		cin>>N[j];
	 		sum+=N[j];
		 }
		 int target=sum/2;
		 
		 memset(dp,0,sizeof(dp));
		 
		 for(int n=1;n<=s[i];n++){
		 	for(int k=target;k>=1;k--){
		 		if(k>=N[n])
		 		dp[k]=max(dp[k],dp[k-N[n]]+N[n]);
			 }
		 }
		 ans+=(sum-dp[target]);
	 }
	 cout<<ans;




    return 0;
}

