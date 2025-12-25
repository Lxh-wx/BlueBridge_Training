#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int arr[25];//p1036 Ñ¡Êý 
int k,n;
bool vin[25];
int ans=0;

bool is_prime(int num)
{
	if(num<2)return false;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0) return false;
	}
	return true; 
}

void dfs(int start,int cnt,int sum)
{
	if(cnt==k)
	{
		if(is_prime(sum)) ans++;
		return;
	}
	for(int i=start;i<n;i++)
	{
		dfs(i+1,cnt+1,sum+arr[i]);
	}
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	dfs(0,0,0);
	cout<<ans;

    return 0;
}

