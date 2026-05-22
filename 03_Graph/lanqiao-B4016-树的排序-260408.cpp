#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int n;
vector<int> G[100005];
int max_len=0;
int d[100005];

void dfs(int u,int f){
	int d1=0,d2=0;
	
	for(int e:G[u]){
		if(u==f)continue;
		dfs(e,u);
		
		int dist=d[e]+1;//ÁÙÊ±´æ´¢
		if(dist>d1){
			d2=d1;
			d1=dist;
		}else if(dist>d2){
			d2=dist;
		}
	}
	d[u]=d1;
	max_len=max(max_len,d1+d2); 
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
	}
	dfs(1,0);
	cout<<max_len<<endl;
    return 0;
}

