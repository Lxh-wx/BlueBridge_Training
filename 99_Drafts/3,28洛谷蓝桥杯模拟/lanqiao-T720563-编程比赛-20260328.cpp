#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 901234+654321+5;
struct point{
	int a;
	ll b; 
	
};
bool cmp(const point a,const point c){
	return a.b<c.b;
}

point p[INF]; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<=901233;i++){
    	p[i].a=1;
    	p[i].b=789456+i*567890;
	} 
	for(int i=901234;i<=901234+654320;i++){
			p[i].a=2;
			p[i].b=654321+(i-901234)*876543;
		}
	sort(p,p+901234+654320,cmp);
	ll ans=0;
	ll a1=0;
	for(int i=0;i<=901234+654320;i++){
		if(p[i].a==1)a1++;
		else ans+=a1;
		if(p[i].a!=p[i-1].a&&p[i].b==p[i-1].b){
			ans--;
		}
	}
	cout<<ans;

    return 0;
}

