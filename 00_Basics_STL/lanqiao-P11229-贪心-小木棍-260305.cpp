#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int num[11]={0,6,2,5,5,4,5,6,3,7,6};
int a[100005];
int n; 
int check(int &x,int v){
	for(int i=1;i<11;i++){
		if(v==0) continue;
		if(x>num[i]){
			x-=num[i];
			return i; 
		}
	}
}
int 5[19];
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]<2){
			cout<<-1;
			continue;
		}
		int v=0;
		while(a[i]>=2){
			sum=sum*10+check(a[i],v);
			v++;
		}
		cout<<sum<<"\n";
	}

    return 0;
}

