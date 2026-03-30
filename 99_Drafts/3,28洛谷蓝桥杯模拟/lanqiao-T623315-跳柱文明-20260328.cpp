#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int T;
int n,x;
int a[1005];

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T;
    for(int i=1;i<=T;i++){
    	
    	memset(a,0,sizeof(a));
    	
		cin>>n>>x;
		
		for(int j=1;j<=n;j++){
			
			cin>>a[j];
			
			if(j==1)continue;
			if(a[j]<a[j-1]){
				if(a[j-1]-a[j]>x){
					cout<<"Lose"<<"\n";
					break;
				}
			}else if(a[j]>a[j-1]){
				if(a[j]-a[j-1]>1){
					cout<<"Lose"<<"\n";
					break;
				}
			}
			if(j==n){
				cout<<"Win"<<"\n";
			} 
		}
	}


    return 0;
}

