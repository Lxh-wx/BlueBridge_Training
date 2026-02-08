#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n,m;
int b;
struct people{
	int id;
	int num;
}; 
people peo[5005];
bool cmp(const people &a,const people &b){
	if(a.num!=b.num){
		return a.num>b.num;
	}
	return a.id<b.id;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    b=m*1.5;
    for(int i=1;i<=n;i++){
    	cin>>peo[i].id>>peo[i].num;
	}
	sort(peo+1,peo+1+n,cmp);
	int t;
	for(int i=b;peo[b].num==peo[i].num;i++){
			t=i;
		}
	cout<<peo[b].num<<" "<<t<<"\n";
	for(int i=1;i<=t;i++){
		cout<<peo[i].id<<" "<<peo[i].num<<"\n";
	}




    return 0;
}

