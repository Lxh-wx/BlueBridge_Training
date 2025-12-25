#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N=6010;
int n;
int f[N][2];
int happy[N];
vector<int> G[N];
bool has_boss[N];

void dfs(int u){
	f[u][1]=happy[u];
	f[u][0]=0;
	for(int v:G[u]){
		dfs(v);
		f[u][1]+=f[v][0];
		f[u][0]+=max(f[v][0],f[v][1]);
	}
	
}


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>happy[i]; 
	}
	
	int K,L;
	for(int i=1;i<n;i++){
		 cin>>K>>L;
		 G[L].push_back(K);
		 has_boss[K]=true;
	}
	int root=0;
	for(int i=1;i<=n;i++){
		if(has_boss[i]){
			continue;
		}
		root=i;
		break;
	}
	
	dfs(root);
	
	cout<<max(f[root][0],f[root][1])<<"\n";

    return 0;
}

