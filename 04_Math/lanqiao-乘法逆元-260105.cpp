	#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
long long inv[3000005];
long long qpow(long long a,long long b,long long p){
	long long ras=1;
	while(b>0){
		if(b&1){
			ras=ras*a%p;
		}
		a=a*a%p;
		b>>=1;
	}
	return ras;
} 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long  a,p;
    long long i; 
    cin>>a>>p;
    inv[1]=1;
    cout<<1<<'\n';
    for(i=2;i<=a;i++){
    	inv[i]=(p-p/i)*inv[p%i]%p;
    	cout<<inv[i]<<endl;
	}
    return 0;
}

