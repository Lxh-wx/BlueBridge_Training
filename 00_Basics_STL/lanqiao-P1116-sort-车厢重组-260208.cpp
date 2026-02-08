#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int a[1005];
int t1=0,t2=0,sum=0;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]; 
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[j]==i){
				if(j-i>0){
					for(int k=i;k<=j-1;k++){
						t1=a[j];
						a[j]=a[k];
						a[k]=t1;
						sum++;
					}
				}
				if(i-j>0){
					for(int k=i;k<=j+1;k--){
						t2=a[j];
						a[j]=a[k];
						a[k]=t2;
						sum++;
					}
				}
			}
		}
	} 
	cout<<sum;

    return 0;
}

