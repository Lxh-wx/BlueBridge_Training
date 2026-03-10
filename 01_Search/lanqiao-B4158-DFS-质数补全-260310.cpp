#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int t;
string  a[12];
//g给我挑问题但是不要直接告诉我答案，我确实有些地方写不明白了 
bool check_prime(string c){
	ll b=stoll(c);
	if(b<2)
	return false;
	int v=0;
	for(int i=2;i*i<=b;i++){//i从2开始计数 //检查平方根，即i*i<=b 
		if(b%i==0){
			return false;
		}
	}
	return true;
}

ll real_ans=-1;

bool dfs(int step ,const vector<int> &pos , string b){
	if(step==pos.size()){
		if(check_prime(b)) real_ans=stoll(b);
		return check_prime(b);
	}
	
	int real_idx=pos[step];
	for(int i=0;i<=9;i++){
		if(real_idx==0&&i==0)continue;
		b[real_idx]=i+'0';
		if(dfs(step+1,pos,b))return true;
		b[real_idx]='*';
	}
	return false;
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int i=1;i<=t;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=t;i++){
		ll ans=0;//保存答案 
		vector<int> pos;
		//遍历字符串，寻找星并记录 
		for(int j=0;j<a[i].length();j++){
			if(a[i][j]=='*'){
				pos.push_back(j); //同时记录星的位置和数量 
			}
		}
		if(pos.size()==0){//利用pos.size()函数 
			if(check_prime(a[i])){
				ans=stoll(a[i]);
			}else{
				ans=-1;
			}
		}else{
			if(dfs(0,pos,a[i])){//进入dfs 
				ans=real_ans;
			}else{
				ans=-1;
			}
		}
		cout<<ans<<"\n";
		real_ans=-1;
	}


    return 0;
}

