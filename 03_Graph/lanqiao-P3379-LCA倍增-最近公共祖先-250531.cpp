#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m,s;
vector<int> adj[500005];
int depth[500005];
int up[500005][20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s;
    depth[s]=1;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(auto v:adj[u]){
            if(depth[v]!=0)continue;
            depth[v]=depth[u]+1;
            up[v][0]=u;
            q.push(v);
        }
    }
    up[s][0]=s;
    for(int j=1;j<20;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        if(depth[u]<depth[v]) swap(u,v);
        int diff=depth[u]-depth[v];
        for(int j=0;j<=20;j++){
            if(diff>>j&1){
                u=up[u][j];
            }
        }
        if(up[u][0]==up[v][0]){
            if(u==v){
                cout<<u<<"\n";
                continue;
            }
            cout<<up[u][0]<<"\n";
            continue;
        }
        for(int j=19;j>=0;j--){
            if((1<<j)>depth[u])continue;
            if(up[u][j]!=up[v][j]){
                u=up[u][j];
                v=up[v][j];
            }
        }
        cout<<up[u][0]<<"\n";
    }



    return 0;
}
