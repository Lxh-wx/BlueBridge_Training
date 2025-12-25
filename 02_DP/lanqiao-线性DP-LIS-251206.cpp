#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
int a[N];
int f[N];
int n,ans=0;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		f[i]=1;
		for(int j=1;j<=i;j++){
			if(a[j]<a[i])
			f[i]=max(f[j]+1,f[i]);
		}
		ans=max(f[i],ans);
	}

	cout<<ans;

    return 0;
}

