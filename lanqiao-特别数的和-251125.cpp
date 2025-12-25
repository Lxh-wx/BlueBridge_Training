#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

int main() {
	
    ios::sync_with_stdio(0);
    cin.tie(0);
    	int check(int );
    long long ans=0;
    int n=0,i=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
	    if(check(i))
	    {
	    	ans+=i;
		}
	}
	cout<<ans<<"\n";

    return 0;
}

int check(int x)
{
	int a=0;
	while(x>0)
	{
		int d;
		d=x%10;
		x/=10;
		if(d==2||d==0||d==1||d==9)
		{
			a=1;
		}
	}
	return a;
}
