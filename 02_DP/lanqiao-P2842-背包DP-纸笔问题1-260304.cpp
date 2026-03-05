#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,w;
int dp[10006];
int a[1005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>w;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<10006;i++){
		dp[i]=INF;
	}
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=w;j++){
			if(dp[j-a[i]]!=INF)
			dp[j]=min(dp[j],dp[j-a[i]]+1);
		}
	}
	cout<<dp[w];


    return 0;
}

