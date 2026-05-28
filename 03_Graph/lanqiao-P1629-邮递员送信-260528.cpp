#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int N=1005;
int n,m;
struct edge{
    int to;
    int w;
};
vector<edge> G1[N];
vector<edge> G2[N];

ll dis1[N];
ll dis2[N];
int  vis[N];

void dijkstra(int s,vector<edge> G[],ll dis[]){
    priority_queue<pair<int ,int >,vector<pair<int ,int >>,greater<pair<int ,int>>> p;
    p.push({0,s});
    while(!p.empty()){
        int d=p.top().first;
        int u=p.top().second;
        p.pop();
        if(d>dis[u])continue;
        if(vis[u])continue;
        vis[u]=1;
        for(auto e:G[u]){
            int v=e.to;
            int w=e.w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                p.push({dis[v],v});
            }
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G1[u].push_back({v,w});
        G2[v].push_back({u,w});
    }
    memset(dis1,INF,sizeof(dis1));
    memset(dis2,INF,sizeof(dis2));
    dis1[1]=dis2[1]=0;
    dijkstra(1,G1,dis1);
    memset(vis,0,sizeof(vis));
    dijkstra(1,G2,dis2);

    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(dis1[i]+dis2[i]);
    }
    cout<<sum;
    return 0;
}
