#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

struct student {
	string name;
	int score;
	int id;
};
student stu[100];

bool cmp(student a,student b){
	if(a.score!=b.score){
		return a.score>b.score;
	}
	
	return a.id<b.id; 
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>stu[i].name>>stu[i].score>>stu[i].id;
	}
	sort(stu,stu+n,cmp);
	//头 尾 判断方式
	//他自己排序 
	 for(int i=0;i<n;i++){
    	cout<<stu[i].name<<stu[i].score<<stu[i].id;
	}
   return 0;
}

