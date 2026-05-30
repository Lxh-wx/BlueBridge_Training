#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MOD = 80112002;

int n,m;

vector<int> node[500005];
queue<int> q;
int ind[500005];
int dp[500005];
int outd[500005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        node[u].push_back(v);
        ind[v]++;
        outd[u]++;
    }
    for(int i=1;i<=n;i++){
        if(ind[i]==0){
            q.push(i);
            dp[i]=1;
        }
    }
    while(!q.empty()){
        int a=q.front();
        q.pop();
        for(auto e:node[a]){
            dp[e]=(dp[e]+dp[a])%MOD;
            ind[e]--;
            if(ind[e]==0){
                q.push(e);
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(outd[i]==0){
            ans=(ans+dp[i])%MOD;
        }
    }
    cout<<ans;

    return 0;
}
