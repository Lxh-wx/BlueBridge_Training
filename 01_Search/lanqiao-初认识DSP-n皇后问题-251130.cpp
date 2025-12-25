#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;
 int n;
int c=0,d=0;
int book[N];
bool hang[N]={0},zheng[N*2]={0},fan[N*2]={0};

void dfs(int step){
    if(step==n+1){
    	if(c<3){
	        for(int i=1;i<=n;i++){
	            cout<<book[i]<<" ";
	        }
	        cout<<endl;
	        c++;
    	}
        d++;
        return ;
    }
    for(int i=1;i<=n;i++){
        if(hang[i]!=true&&zheng[i+step]!=true&&fan[i-step+n]!=true){
            hang[i]=true;
            zheng[i+step]=true;
            fan[i-step+n]=true;
            book[step]=i;

            dfs(step+1);
            
            hang[i]=false;
            zheng[i+step]=false;
            fan[i-step+n]=false;
        }
    }
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    dfs(1);
    cout<<d;
    return 0;
}

