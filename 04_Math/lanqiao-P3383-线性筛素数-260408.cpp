#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> p;
int q;
int n;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cin>>n>>q;
	vector<int> notp(n+1);
	notp[1]=1;
	for(int i=2;i<=n;i++){
		if(!notp[i]) p.push_back(i);
		for(int e:p){
			if((ll)i*e>n)break;
			if(i%e==0)break;
			notp[i*e]=1;
		}
	}
	int t=0;
	for(int i=1;i<=q;i++){
		cin>>t;
		cout<<p[t-1]<<"\n";
	}
	return 0;
}
