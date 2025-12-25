#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

bool check(int x)
{
	int i;
	string s=to_string(x);
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='2'||s[i]=='0'||s[i]=='1'||s[i]=='9')
		{
			return true;
		}
	}
	return false;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);

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

