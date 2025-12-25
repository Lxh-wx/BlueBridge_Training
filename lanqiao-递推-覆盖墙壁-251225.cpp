#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
long long f[1000005];
int s,N;

int fun(int u)
{
	if(u==1||u==0) return 1;
	if(u==2) return 2;
	if(f[u]!=0) return f[u];
	return f[u]=2*fun(u-1)+fun(u-3);
 } 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    s=fun(N)%10000;
    cout<<s;

    return 0;
}

