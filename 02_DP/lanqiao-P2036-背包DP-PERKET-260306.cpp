#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int a[15];
int b[15];
struct point{
	int x=1;
	int y=0;
	int ans=INF;
};
point dp[15]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>b[i];
	}

	int mi=-1;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			dp[j].ans=min(dp[j].ans,abs(dp[j].x*a[i]-dp[j].y+b[i]));
			if(dp[j].ans<mi)
			mi=dp[j].ans;
		}
	}
	cout<<mi;


    return 0;
}

