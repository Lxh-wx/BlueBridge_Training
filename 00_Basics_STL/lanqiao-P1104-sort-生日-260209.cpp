#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
struct student{
	int id;
	int y;
	int m;
	int d;
	string name;
};
student stu[105]; 
bool cmp(const student &a,const student &b){
	if(a.y!=b.y){
		return a.y<b.y;
	}
	if(a.m!=b.m){
		return a.m<b.m;
	}
	if(a.d!=b.d){
		return a.d<b.d;
	}
	if(a.id!=b.id){
		return a.id>b.id;
	}
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>stu[i].name>>stu[i].y>>stu[i].m>>stu[i].d;
    	stu[i].id=i;
	}
	sort(stu+1,stu+1+n,cmp); 
	for(int i=1;i<=n;i++){
		cout<<stu[i].name<<"\n";
	}


    return 0;
}

