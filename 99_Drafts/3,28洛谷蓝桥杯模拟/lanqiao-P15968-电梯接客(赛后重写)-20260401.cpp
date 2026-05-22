#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
ll N,X,Y,W;
struct Group{
	ll f;//第二个点，用ll 
	ll a;
};

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>X>>Y>>W;
    vector<Group> g(N);//第一个错误点【N】--（N） 
    for(int i=0;i<N;i++){
    	int t,x;
    	cin>>t>>x;
    	g[i].f=t;
    	g[i].a=x;
	}
	sort(g.begin(),g.end(),[](const Group& a,const Group& b){
		return a.f<b.f;
	});
	ll sum=0;
	ll pre_sum=0;
	ll  strat=-1,st=0;
	for(int i=0;i<N;i++){
		if(g[i].a==0)continue;
		if(strat==-1){
			st=g[i].f;
			strat=0;
		}
		ll l=pre_sum+1;
		ll r=pre_sum+g[i].a;
	  ll n =0;
	  if(r>=1){
	  	n= (r - 1) / W - (l + W - 2) / W + 1;
	  }
		pre_sum+=g[i].a;
		if(strat==0){
			sum+=abs(X-st)+(Y-st);
			sum+=(n-1)*2*(Y-st);
			strat=1;
		}else
		sum+=n*2*(Y-g[i].f);
	}
	cout<<sum; 
    return 0;
}

