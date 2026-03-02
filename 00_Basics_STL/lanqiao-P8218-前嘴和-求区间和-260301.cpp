#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int m;
ll a[10005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	a[i]+=a[i-1];
	}
	cin>>m;
	int x=0,y=0;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		cout<<a[y]-a[x-1]<<endl;
	}
    return 0;
}

