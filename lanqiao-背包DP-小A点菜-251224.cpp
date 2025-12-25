#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int N,M; 
int p[105];
int f[10005];
int i,j; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;

    for(i=0;i<N;i++)
    {
    	cin>>p[i];
	}
	f[0]=1;
	for(i=0;i<N;i++)
	{
		for(j=M;j>=p[i];j--)
		{
			f[j]=f[j]+f[j-p[i]];
		}
	}
	cout<<f[M]<<endl;

    return 0;
}

