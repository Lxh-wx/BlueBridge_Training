#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int n;
int f[20][20];

long long fun(int i,int j){//i是压在栈里 j是还没入栈的 
	if(j==0) return 1;
	if(f[i][j]!=0) return f[i][j];
	long long ans=0;
	if(j>0) ans+=fun(i+1,j-1);
	if(i>0) ans+=fun(i-1,j);
	return f[i][j]=ans;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<fun(0,n);
    return 0;
}

