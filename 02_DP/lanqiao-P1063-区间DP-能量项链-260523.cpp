#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int N;
int l[210];
int dp[210][210];


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=1;i<=N;i++){
    	cin>>l[i];
    	l[i+N]=l[i];
	}
	int ma=0;
	for(int len=3;len<=N+1;len++){
		for(int i=1;i<=2*N-len+1;i++){
			int j=i+len-1;
			for(int k=i+1;k<j;k++){
				dp[i][j]=max(dp[i][j],dp[i][k]+dp[k][j]+l[i]*l[k]*l[j]);
			}
			if(dp[i][j]>ma)
			ma=dp[i][j];
		}
	}
	cout<<ma;
    return 0;
}

