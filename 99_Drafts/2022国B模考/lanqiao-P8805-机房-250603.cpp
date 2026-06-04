#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

// P8805 [蓝桥杯 2022 国 B] 机房
// n台电脑树形连接，每台延迟=度数，求u→v路径上所有节点延迟和
int n,m;
vector<int> a[100005];
int depth[100005];
int up[100005][20];
ll pre[100005];
ll ind[100005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
        ind[u]++;ind[v]++;
    }
    depth[1]=1;
    pre[1]=ind[1];
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(auto v:a[u]){
            if(depth[v]!=0)continue;
            depth[v]=depth[u]+1;
            up[v][0]=u;
            pre[v]=pre[u]+ind[v];
            q.push(v);
        }
    }
    up[1][0]=1;
    for(int j=1;j<20;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
    for(int i=1;i<=m;i++){
        int p,q;
        cin>>p>>q;
        if(q==p){
            cout<<ind[q]<<'\n';
            continue;
        }
        if(depth[q]>depth[p]){
            swap(q,p);
        }
        int prep=pre[p];
        int preq=pre[q];
        int diff=depth[p]-depth[q];
        for(int j=0;j<=19;j++){
            if(diff>>j&1){
                p=up[p][j];
            }
        }
        if (p == q) { cout << prep + preq - 2*pre[p] + ind[p] << '\n'; continue; }
        if(up[p][0]==up[q][0]){
            int ans=prep+preq-2*pre[up[q][0]]+ind[up[p][0]];
            cout<<ans<<'\n';
            continue;
        }
        for(int j=19;j>=0;j--){
            if((1<<j)>depth[q])continue;
            if(up[q][j]!=up[p][j]){
                q=up[q][j];
                p=up[p][j];
            }
        }
        int ans=prep+preq-2*pre[up[q][0]]+ind[up[p][0]];
        cout<<ans<<'\n';
    }
    return 0;
}
