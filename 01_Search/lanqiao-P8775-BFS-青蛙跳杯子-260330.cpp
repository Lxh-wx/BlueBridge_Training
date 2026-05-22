#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
string a;
string b;
int vis[20];
int dx[6]={-3,-2,-1,1,2,3}; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int s=0;
    while(!(cin>>a));
	while(!(cin>>b));
	queue<int> q; 
	while(a[s]){
		if(a[s]==b[s])
		{
			vis[s]=1;
		}else {
			q.push(s);
		}
		s++;
	}
	int ans=0;
	while(!q.empty()){
		int now=q.front();
		q.pop;
		for(int i=0;i<6;i++){
			int nx=now+dx;
			if(nx<0||nx>s-1)continue;
			if(vis[nx])continue;
			int t=a[nx];
			if(a[now]==b[nx]&&(a[now]==*||a[nx]==*)){
				a[nx]=a[now];
				a[now]=t;
				ans++;
				vis[nx]=1;
			}
		} 
	}
	cout<<s;
    return 0;
}

