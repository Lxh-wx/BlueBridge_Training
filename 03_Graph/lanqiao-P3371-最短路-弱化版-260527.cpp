#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 2147483647;
int n,m,s;
struct edge{
    int to;
    int w;
};
vector<edge> G[10005];


ll dis[10005];//与起点的距离
int vis[10005];//记录上一节点

void dijkstra(int s){
    priority_queue<pair<int ,int>,vector<pair<int ,int>>,greater<pair<int ,int>>> pq;
    pq.push({0,s});
    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dis[u])continue;
        if(vis[u])continue;
        vis[u]=1;

        for(auto e:G[u]){
            int v=e.to,w=e.w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                pq.push({dis[v],v});
            }
        }

    }
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u].push_back({v,w});
    }
    memset(dis,INF,sizeof(dis));
    dis[s]=0;

    dijkstra(s);

    for(int i=1;i<=n;i++){
       cout<<dis[i]<<' ';
    }

    return 0;
}
