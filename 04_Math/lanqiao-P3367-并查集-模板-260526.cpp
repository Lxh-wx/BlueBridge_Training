#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n, m;
int z[1000005];
int x[1000005];
int y[1000005];
int vis[1000005];

int find(int x){
    if(vis[x]==x) return x;
    return vis[x]=find(vis[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>z[i]>>x[i]>>y[i];
    }
    for(int i=1;i<=n;i++){
        vis[i]=i;
    }
    for(int i=1;i<=m;i++){
        if(z[i]==1){
            int a=find(x[i]);
            int b=find(y[i]);
            vis[b]=a;
        }else if(z[i]==2){
            if(find(x[i])==find(y[i])){
                cout<<'Y'<<endl;
            }else{
                cout<<'N'<<endl;
            }
        }
    }
    return 0;
}
