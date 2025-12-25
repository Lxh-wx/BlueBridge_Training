#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
int T;
int M;
int t[105],m[105];
	long long f[10000005];
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T>>M;
    for(int i=1;i<=M;i++){
    	cin>>t[i]>>m[i];
	}
	for(int i=1;i<=M;i++){
		for(int j = t[i]; j <= T; j++){
			f[j]=max(f[j],f[j-t[i]]+m[i]);
		} 
	}
	cout<<f[T];
    return 0;
}

