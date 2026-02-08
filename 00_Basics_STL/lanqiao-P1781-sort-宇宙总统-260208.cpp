#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct people{
	int id;
	string votes;
};

int n;
people peo[25];

bool cmp(const people &a,const people &b){
	if(a.votes.length()!=b.votes.length()){
		return a.votes.length()>b.votes.length();
	}
	return a.votes>b.votes;
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>peo[i].votes;
		peo[i].id=i; 
	}
	sort(peo+1,peo+n+1,cmp);
	cout<<peo[1].id<<"\n"<<peo[1].votes;

    return 0;
}

