#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int N[100005]; 
int M[100005]; 

int find(int p ){
	int l=1;
	int r=m;
	while(l<r){
		int mid=r+l>>1;
		if(M[mid]>=p){
			r=mid;
		}else
		l=mid+1; 
	}
	int ans;
	if(p<=M[1]) return M[1]-p;
	ans=abs(M[l]-p);
	if(l>1){
		ans=min(ans,abs(M[l-1]-p));
	}
	return ans;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    for(int i=1;i<=m;i++){
    	cin>>M[i];
	}
	sort(M+1,M+1+m);
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>N[i];
		sum+=find(N[i]);
	}
	cout<<sum;


    return 0;
}

