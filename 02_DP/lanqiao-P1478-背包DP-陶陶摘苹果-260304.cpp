#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,s;
int a,b;
int dp[1005];
int high[5005];
int power[5005];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>s;
    cin>>a>>b;
    int c=a+b;
    for(int i=1;i<=n;i++){
    	cin>>high[i]>>power[i];
	}
	for(int i=1;i<=n;i++){
		if(high[i]>c) continue;
		for(int j=s;j>=0;j--){
			if(j>=power[i])
			dp[j]=max(dp[j],dp[j-power[i]]+1);
		}
	}
	cout<<dp[s];


    return 0;
}

