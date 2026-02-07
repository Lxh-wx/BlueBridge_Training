#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int a[1005];
int b[1005]; 
bool c=true;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		b[i]=abs(a[i+1]-a[i]);
	}
	sort(b+1,b+n);
	for(int i=1;i<=n-2;i++){
  		
		  if(abs(b[i+1]-b[i])==1){
			continue;
		}
		c=false;
		break;
	}
	if(c){
		cout<<"jolly";
	}else{
		cout<<"Not jolly";
	}
    return 0;
}

