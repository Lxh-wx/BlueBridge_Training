#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
int a[1005][1005];
int n,m;
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int x1,x2,y1,y2;
    for(int i=0;i<m;i++){
    	cin>>x1>>y1>>x2>>y2;
    	for(int i=x1;i<=x2;i++){
    		for(int j=y1;j<=y2;j++){
    			a[i][j]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}


    return 0;
}

