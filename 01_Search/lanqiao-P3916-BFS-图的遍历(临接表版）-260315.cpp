#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int ans[100005];
vector<int> G[100005];

void bfs(int v,int max_id){
	for(int u:G[v]){
		if(ans[u])continue;
		ans[u]=max_id;
		bfs(u,max_id);
	}
} 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    	int v,u;
    	cin>>v>>u;
    	G[u].push_back(v);
	}
	
	for(int i=n;i>=1;i--){
		if(ans[i]){
			continue;
		}
		ans[i]=i;
		bfs(i,i);

	}	 
    for(int i=1;i<=n;i++){
    	cout<<ans[i]<<" ";
	}


    return 0;
}

