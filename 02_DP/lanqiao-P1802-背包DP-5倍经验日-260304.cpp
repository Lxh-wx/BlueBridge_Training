#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int n,x;
struct coder{
	int win;
	int lost;
	int c;
	int weight;
};
coder s[1005];
ll dp[1005];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>x;
    ll sum=0;
    for(int i=1;i<=n;i++){
    	cin>>s[i].lost>>s[i].win>>s[i].weight;
    	s[i].c=s[i].win-s[i].lost;
    	sum+=s[i].lost;
	}
	for(int i=1;i<=n;i++){
		for(int k=x;k>=0;k--){
			if(k>=s[i].weight)
			dp[k]=max(dp[k],dp[k-s[i].weight]+s[i].c);
		}
	}
	cout<<1ll*5*(sum+dp[x]);
	
    return 0;
}

