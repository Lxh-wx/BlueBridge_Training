#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int a[200005];
int vis[200005];

int  dfs(int u,int v,int t){
	if(t>0)vis[u]++;
	if(vis[u]==2){
		return INF;
	}
	if(a[u]==v)return t;
	return dfs(a[u],v,t+1);
} 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==i){
			cout<<0;
			return 0;
		}	
	}
	int min_ans=INF;
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		min_ans=min(min_ans,dfs(i,i,1));
	}
	cout<<min_ans;
    return 0;
}

