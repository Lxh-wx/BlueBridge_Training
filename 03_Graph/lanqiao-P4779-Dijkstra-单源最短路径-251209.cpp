#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

//存图用的边，啥叫存图用的边 
struct Edge{//这个是怎么存边的，存边是什么意思
 
	int to;
	int w;
};
vector<Edge> G[N];//这个G[N]有什么用

//优先队列用的节点（带排序规则） 
struct Node{//这个有什么用，为什么排序规则要写在结构体里面 
	int id;
	int d;
	bool operator >(const Node &a) const{//这个位置实现了什么功能 
		return d> a.d;
	} 
};

int dis[N];//记分牌 
int vis[N];//盖章本 

//功能函数
void dijkstra(int s){
	//1初始化距离
	fill(dis,dis+N,INF);//这个fill是什么，一个用来填充的函数吗，你没介绍啊
	dis[s]=0;
	//定义裁判
	priority_queue<Node,vector<Node>,greater<Node>> q;
	//优先队列，就是一个自己有排队规则的队列对吗，这个规则我可以修改
	q.push({s,0});//这为什么这样写
	
	//开始循环
	while(!q.empty()){
		//a拿出最近的
		Node cur=q.top();
		q.pop();
		int u=cur.id;//这是在干什么
		
		//b检查是不是已经确定过了 
		if(vis[u]) continue;
		
		//c盖章定死 
		vis[u]=true;
		
		//d 换节点开始寻找和对比
		for(auto &e :G[u]){
			int v=e.to,w=e.w;
			if(dis[u]+w<dis[v]){
				dis[v]=dis[u]+w;//更新 我这里就不太清楚这个u是哪个u了
				q.push({v,dis[v]});
			}
		} 
		
	} 
} 


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,s;
    cin>>n>>m>>s;//点数  边数  起点
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		G[u].push_back({v,w});//建图  这个push_back有实际作用还是就是一个名字 
	}
	
	dijkstra(s);
	 
	for(int i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}

    return 0;
}

