#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int a;
int d[100];
int s[100];
int dfs(int u)
{
	
	if(s[u]!=0) return s[u];
	if(u==1)
	{
		return 1;
	}
	for(int i=u/2;i>0;i--)
	{
		s[i]=dfs(i);
		//s[i]++;
		s[u]+=s[i]; 
	}
	s[u]++;
	return s[u];
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a;
    dfs(a);
    cout<<s[a];
    return 0;
}

