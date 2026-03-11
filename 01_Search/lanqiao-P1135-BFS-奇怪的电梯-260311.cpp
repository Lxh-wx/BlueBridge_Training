#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int N,A,B;
int a[210];
int dist[210]; 
  

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>A>>B;
    for(int i=1;i<=N;i++){
    	cin>>a[i];
	}
	
	memset(dist,-1,sizeof(dist));
	
	queue<int> q;
	q.push(A);
	
	int curr=0;
	dist[A]=0;
	
	while(!q.empty()){
		
		curr=q.front();
		q.pop();
		
		if(curr==B){
			cout<<dist[curr];
			return 0;
		}
		
		int next_steps[2] = {curr + a[curr], curr - a[curr]};
		
		for(int i=0;i<2;i++){
			
			int nxt=next_steps[i];
			
			if(nxt<N+1&&nxt>0&&dist[nxt]==-1){
				q.push(nxt);
				dist[nxt]=dist[curr]+1; 
			}
		}
	} 
	cout<<-1;
    return 0;
}

