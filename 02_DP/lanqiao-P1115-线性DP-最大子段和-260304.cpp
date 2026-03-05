#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int a[200005];
int s[200005]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int ma=a[1];
	for(int i=1;i<=n;i++){
		s[i]=max((a[i]+s[i-1]),(a[i]+a[i-1]));
		if(s[i]>ma)
		ma=s[i];
	}
	cout<<ma;


    return 0;
}

