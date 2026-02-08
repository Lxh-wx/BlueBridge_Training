#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
struct point{
	int z;
	int x;
	int y;
};
point p[50005];
double sum;
bool cmp(const point &a,const point &b){
	return a.z<b.z;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].x>>p[i].y>>p[i].z;
	} 
    sort(p+1,p+1+n,cmp);
    int t=0;
    for(int i=2;i<=n;i++){
    	t=(p[i].z-p[i-1].z)*(p[i].z-p[i-1].z)+(p[i].x-p[i-1].x)*(p[i].x-p[i-1].x)+(p[i].y-p[i-1].y)*(p[i].y-p[i-1].y);
    	sum+=sqrt(t);
	}
	printf("%.3f",sum);
    return 0;
}

