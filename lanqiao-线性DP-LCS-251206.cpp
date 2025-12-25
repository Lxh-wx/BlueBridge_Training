#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
int ma[1005][1005];
char a[1005],b[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> (a + 1) >> (b + 1);
    int n = strlen(a + 1); // 计算长度
    int m = strlen(b + 1);
    for(int i=1;i<=n;i++)
	{
    	for(int j=1;j<=m;j++)
		{
    	ma[i][j]=0;
    	if(a[i]==b[j])
			{
	    		ma[i][j]=ma[i-1][j-1]+1;
			}
			else 
			{
                // 未命中，继承左边或上边的最大值
                ma[i][j] = max(ma[i-1][j], ma[i][j-1]);
            }
		}
	} 
    cout<<ma[n][m];
    return 0;
}

