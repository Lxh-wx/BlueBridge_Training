#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
vector<int> p[];
int n; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int a,b,g,k;
    for(int i=1;i<=n;i++){
    	cin>>a>>b>>g>>k;
    	for(int j=a;j<=a+g;j++){
    		for(int k=b;k<=b+k;k++){
    			p[j][k].push(i);
			}
		}
	}
	cin>>x>>y;
	int ans=p[x][y].fornt();
	cout<<ans;

    return 0;
}

