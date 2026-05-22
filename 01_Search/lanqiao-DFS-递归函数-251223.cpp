#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
long a,b,c;
long long arr[25][25][25];

long long w(long long a,long long b,long long c)
{
	if(a<=0||b<=0||c<=0)
		return 1;
	if(a>20||b>20||c>20)
		return w(20,20,20);
		
	if(arr[a][b][c]!=0)return arr[a][b][c];//如果存过了，就直接用 
	
	if(a<b&&b<c)
	return arr[a][b][c]=(w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c));//存结果 
	else
	return arr[a][b][c]=(w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1));
	
	return arr[a][b][c];
 } 

int main() {
 
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    while(true )
    {
    	cin>>a>>b>>c;
    	if(a==-1&&b==-1&&c==-1)
    	break;
		printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
	}
	return 0;
}

