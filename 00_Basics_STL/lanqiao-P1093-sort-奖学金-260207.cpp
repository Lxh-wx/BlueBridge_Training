#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
struct student{
	int num;
	int math;
	int chiese;
	int english;
	int sum;
};
student stu[305];
int n;
bool cmp(const student &a,const student &b){
	if(a.sum!=b.sum){
	return a.sum>b.sum;
	}
	if(a.chiese!=b.chiese){
		return a.chiese>b.chiese;
	}
	return a.num<b.num;
	
} 

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	stu[i].num=i;
    	cin>>stu[i].chiese>>stu[i].math>>stu[i].english;
    	stu[i].sum=stu[i].chiese+stu[i].math+stu[i].english;
	}
	sort(stu+1,stu+n+1,cmp);
	for(int i=1;i<6;i++){
		cout<<stu[i].num<<" "<<stu[i].sum<<"\n"; 
	}
    return 0;
}

