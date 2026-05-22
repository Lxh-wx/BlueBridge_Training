#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
int r;
int a[1005][1005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>r;
    for(int i=0;i<r;i++){
    	for(int j=0;j<=i;j++){
    		cin>>a[i][j];
		}
	}
	for(int i=r-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		}
	}
	cout<<a[0][0];

    return 0;
}

