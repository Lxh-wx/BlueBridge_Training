#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n,b,m; 
int a[20005];
bool cmp(const &a,const &b){
	return a>b;
}
int sum=0;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>b;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		sum+=a[i];
		m++;
		if(sum>=b){
			cout<<m;
			break; 
		}	 
		
	}
    return 0;
}

