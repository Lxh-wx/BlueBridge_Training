#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int N,M,K;
int c[100005];
int a[100005];


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>K;
    for(int i=2;i<=N;i++)cin>>c[i];
	for(int i=1;i<=N;i++)cin>>a[i];
	priority_queue<ll,vector<ll>,greater<ll>>q;
	
	int s=0;
	int t=0;
	ll res=0;
	for(int i=1;i<=N;i++){
		s+=c[i];
		if(s>M)break;
		if((s+t)>M)break;
		ll x=a[i];
		q.push(x);
		t+=x;
		if(q.size()>K){
			t-=q.top();
			q.pop();
		}
		ll now=min(t,M-s);
		res=max(res,now);
	}
	cout<<res;
    return 0;
}

