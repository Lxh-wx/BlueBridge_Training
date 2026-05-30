#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int fa[5005];
struct edge{
    int u;
    int v;
    int w;
};

vector<edge> e;

bool cmp(edge a,edge b){
    return a.w<b.w;
}

int find(int x){
    if(fa[x]==x)return x;
    return fa[x]=find(fa[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        e.push_back({u,v,w});
    }
    for(int i=1;i<=n;i++)fa[i]=i;
    sort(e.begin(),e.end(),cmp);
    int ans=0;
    int count=0;
    for(auto ed:e){
        if(count==n-1)break;
        if(find(ed.u)!=find(ed.v)){
            fa[find(ed.u)]=find(ed.v);
            count++;
            ans+=ed.w;
        }
    }
    if(count==n-1){
        cout<<ans;
    }else{
        cout<<"orz";
    }
    return 0;
}
