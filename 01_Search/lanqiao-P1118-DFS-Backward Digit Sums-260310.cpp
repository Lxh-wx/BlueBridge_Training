#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,S;
int a[15]; 
bool vis[15];
int C[15][15];
void init_C(int n) {
	    for (int i = 0; i <= n; i++) {
	        C[i][0] = 1; // 边界：从 i 个中选 0 个只有 1 种方案
	        for (int j = 1; j <= i; j++) {
	            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]);
	        }
	    }
	}	
    
int sum=0;
bool dfs(int v){
	if(v==n){
		if(sum==S){
			return true;
		}else{
		return false;
		}
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			a[v]=i;
		}else continue;
		vis[i]=true;
		sum+=C[n-1][v]*a[v];
		if(dfs(v+1))return true;
		vis[i]=false;
		sum-=C[n-1][v]*a[v];
	}
	return false;
}


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>S;
    init_C(n);
    if(dfs(0)){
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
		}
	}
    return 0;
}

