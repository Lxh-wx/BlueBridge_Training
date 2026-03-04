#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int v,n;
int a[35];
int dp[20005]; 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>v>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=v;j>=1;j--){
			if(j>=a[i])
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}
	cout<<v-dp[v];


    return 0;
}

