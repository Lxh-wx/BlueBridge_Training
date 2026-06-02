#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n,m;
int t[205];
int Q;
int dis[205][205];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                dis[i][j]=0;
            }else{
                dis[i][j]=INF;
            }
        }
    }

    for(int i=0;i<n;i++) cin>>t[i];

    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        dis[u][v]=w;
        dis[v][u]=w;
    }

    cin>>Q;

    int now=0;
    for(int i=1;i<=Q;i++){
        int x,y,qt;
        cin>>x>>y>>qt;
        while(now<n && t[now] <=qt){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dis[i][now]+dis[now][j]<dis[i][j]){
                        dis[i][j]=dis[i][now]+dis[now][j];
                    }
                }
            }  
            now++;
        }

        if(t[x]<=qt && t[y]<=qt && dis[x][y]<INF){
            cout << dis[x][y] <<  '\n' ;
        }else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}
