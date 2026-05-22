#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
long long a,b,p;
long long ras; 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    ras=1; 
    cin>>a>>b>>p;
    a=a%p;
    cout<<a<<'^'<<b<<' '<<"mod"<<' ';
    while(b>0){
    	if(b&1){
    		ras=ras*a%p;
		}
		a=a*a%p;
		b>>=1; 
	}
	cout<<p<<'='<<ras;
    return 0;
}

