#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 6005;
int f[N][2];
vector<int> G[N];
int happy[N];
bool has[N];

void dfs(int u){
	f[u][1]=happy[u];
	f[u][0]=0;
	for(int v:G[u])
	{
		dfs(v);
		f[u][1]+=f[v][0];
		f[u][0]+=max(f[v][0],f[v][1]);
	}
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>happy[i];
	}
	int l,k;
	for(int i=1;i<=n-1;i++){
		cin>>k>>l;
		G[l].push_back(k);
		has[k]=true;
	}
	int root;
	for(int i=1;i<=n;i++){
		if(has[i])
		{
			continue;
		}
		root=i;
		break;
	}
	dfs(root);
	cout<<max(f[root][0],f[root][1]); 
	
    return 0;
}

