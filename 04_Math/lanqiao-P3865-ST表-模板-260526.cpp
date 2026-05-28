#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int st[100005][20];
int lg[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    lg[1]=0;
    for(int i=2;i<=n;i++){
        lg[i]=lg[i/2]+1;
    }
    for(int i=1;i<=n;i++){
        cin>>st[i][0]; 
    }
    for(int j=1;j<=lg[n];j++){
        for(int i=1;i+(1<<j)-1<=n;i++){
            st[i][j]=max(st[i][j-1],st[i+(1<<j-1)][j-1]);
        }
    }
    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;
        int ans=0;
        int L=(r-l+1);
        int k=lg[L];
        ans=max(st[l][k],st[l+L-(1<<k)][k]);
        cout<<ans<<'\n';
    }
    return 0;  
}
