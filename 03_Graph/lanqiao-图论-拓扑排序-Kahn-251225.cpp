#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N = 105;
vector<int> G[N];
int in[N];
vector<int> result;


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int v;
    	while(cin>>v&&v!=0){
    		G[i].push_back(v);
    		in[v]++;
		}
	}
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		
		result.push_back(u);
		          
		for(int v:G[u]){
			in[v]--;
			if(in[v]==0){
				q.push(v);
			} 
		}
	} 
	
	for(int v : result){
		cout<<v<<' ';
	}


    return 0;
}

