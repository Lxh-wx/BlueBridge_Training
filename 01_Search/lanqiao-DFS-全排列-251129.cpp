#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

int n;
int book[20];
bool vis[20];

void dfs(int step) 
{
	if(step==n+1)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<book[i]<<" ";
		}
		cout<<"\n";
		return ;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			
			book[step]=i;
			
			dfs(step+1);
			
			vis[i]=false;
		
		}
	}
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
	dfs(1) ;
    return 0;
}

