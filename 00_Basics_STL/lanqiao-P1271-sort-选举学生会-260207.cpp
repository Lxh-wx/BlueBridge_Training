#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int a[1005];
int n; 
int m;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int j=0;
    for(int i=1;i<=m;i++){
    	cin>>j;
    	a[j]++;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0)continue;
		for(int j=0;j<a[i];j++){
			cout<<i<<" ";
		}
	}
    return 0;
}

