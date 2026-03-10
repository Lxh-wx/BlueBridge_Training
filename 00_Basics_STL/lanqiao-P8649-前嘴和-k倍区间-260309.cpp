#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int n,k;
ll s[100005];
int con[100005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n>>k;
	con[0]=1;
	int temp=0;
	int ans=0;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		
		s[i]=s[i-1]+s[i];
		
		temp=s[i]%k;
		
		ans+=con[temp];
		
		con[temp]++;
	}
	cout<<ans;

    return 0; 
}

