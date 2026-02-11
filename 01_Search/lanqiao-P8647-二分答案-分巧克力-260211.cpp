#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int N;
int k;
struct s{
	int h;
	int w;
}; 
s a[100005];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>k;
    int mx=0;
    for(int i=1;i<=N;i++){
    	cin>>a[i].h>>a[i].w;
    	if(a[i].h>mx){
    		mx=a[i].h;
		}
		if(a[i].w>mx){
    		mx=a[i].w;
		}
	}
	int l=1;
	int r=mx;
	int ans=1;
	while(l<=r){
		int mid=(r+l)/2;
		ll coust=0;
		int ph=0,pw=0;
		for (int i=1;i<=N;i++){
			ph=a[i].h/mid;
			pw=a[i].w/mid;
			coust+=ph*pw;
		}
		if(coust>=k){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<ans<<endl;
    return 0;
}

