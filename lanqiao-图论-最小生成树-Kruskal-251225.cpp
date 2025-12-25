#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 5005;
const int M = 200005;
int f[N];

struct Edge{
	int u,v,w;
	bool operator < (const Edge &other) const {
		return w<other.w;
	}
	 
}edge[M];

int find(int x){//寻根函数 
	if(f[x]==x) return x;
	return f[x]=find(f[x]); 
}

void init(int a[],int n){//赋值函数 
	for(int i=0;i<n;i++) f[i]=i;
} 

void change(int a,int b){
	int rootX=find(a);
	int rootY=find(b);
	if(rootX!=rootY){
		f[rootX]=rootY;
	}
	
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
    	cin>>edge[i].u>>edge[i].v>>edge[i].w;
	}
	sort(edge,edge+m);
	init(f,n);
	int coust=0;
	long long cost=0; 
	for(int i=0;i<m;i++){
		int u=edge[i].u;
		int v=edge[i].v;
		int w=edge[i].w;
		if(find(u)!=find(v)){
			change(u,v);
			cost+=w;
			coust++;
		}
		if(coust==n-1) break;
	}
	if(coust==n-1)
	cout<<cost;
	 else {
        cout << "orz" << endl; 
    }


    return 0;
}

