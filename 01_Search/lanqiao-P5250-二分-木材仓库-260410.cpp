#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
struct Length{
	int a;
	int s;
};
Length l[100005];
set<int> ans;
int n;
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i].a>>l[i].s;
	}
	for(int i=1;i<=n;i++){
		if(l[i].a==1){
			int it=ans.lower_bound(l[i].s);
			if(it!=l[i].s){
				ans.push_back(l[i].s);
			}else if(it==l[i].s){
				cout<<"Already Exist";
			}
		}else if(l[i].a==2){
			if(!ans.empty()){
				cout<<checkout(l[i].s);
			}else{
				cout<<"Empty";
			}
		}
	}

    return 0;
}

