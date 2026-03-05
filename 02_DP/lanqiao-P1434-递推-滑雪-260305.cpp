#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
struct point{
	int x;
	int y;
	int weight;
}; 
point a[10005];
int b[105][105];
int dp[105][105];
int n,m;
bool cmp (const point &a,const point &b){
	return a.weight<b.weight;
}
int dx[4]={-1,+1,0,0};
int dy[4]={0,0,-1,+1};

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int num=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>b[i][j];
    		a[num].x=i;a[num].y=j;a[num].weight=b[i][j];
    		dp[i][j]=1;
    		num++;
		}
	}
	ll ma=-1;
	sort(a+1,a+num,cmp);
	for(int i=1;i<num;i++){
		int temp_x=a[i].x;
		int temp_y=a[i].y;
		for(int j=0;j<4;j++){
			
			int now_x=temp_x+dx[j];
			int now_y=temp_y+dy[j];
			
			if(b[now_x][now_y]<b[temp_x][temp_y]){
				dp[temp_x][temp_y]=max(dp[temp_x][temp_y],dp[now_x][now_y]+1);
			}
		}
		
		if(dp[temp_x][temp_y]>ma){
			ma=dp[temp_x][temp_y];
		}
	} 
	
	cout<<ma;
    return 0;
}

