#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int a[1000005];
int temp[1000005]; 
int d[1000005],s[1000005],j[1000005];
ll diff[1000005];

bool check(int mid){
	
	memset(diff,0,sizeof(diff));
	for(int i=1;i<=mid;i++){
		diff[s[i]]+=d[i];
		diff[j[i]+1]-=d[i];
	}
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum+=diff[i];
		if(sum>a[i]){
			return true;
		}
	}
	return false;

}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	
	for(int i=1;i<=m;i++){
		cin>>d[i]>>s[i]>>j[i]; 
	}
	
	if(!check(m)){
			cout<<"0";
			return 0;
		}
		
	int l=1,r=m;
	while(l<r){
		int mid=(r+l)/2;
		if(check(mid)){
			r=mid;			
		}else{
			l=mid+1;
		}
	}
	cout<<"-1"<<"\n"<<l;
    return 0;
}

