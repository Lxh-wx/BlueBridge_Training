#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m,c;
int a[1003][1003]; 
int sum[1003][1003];
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>a[i][j];
    		sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i-1][j-1];
		}
	}
	int num=0;
	int max,maxx,maxy;
	for(int i=1;i<=n-c+1;i++){
		for(int j=1;j<=m-c+1;j++){
			num=sum[i+c-1][j+c-1]-sum[i+c-1][j-1]-sum[i-1][j+c-1]+sum[i-1][j-1];
			if(i==1&&j==1){
				max=num;
				maxx=i-1;
				maxy=j-1;
			}else if(num>max){
				max=num;
				maxx=i-1;
				maxy=j-1;
			} 
		}
	} 
	cout<<maxx<<" "<<maxy;


    return 0;
}

