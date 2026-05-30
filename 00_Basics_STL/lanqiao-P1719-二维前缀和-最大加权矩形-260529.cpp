#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int m[125][125];
int col_prefix[125][125];

int find(int r1,int r2,int i){
    int ans=0;
    ans=col_prefix[r2][i]-col_prefix[r1-1][i];
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int t;
            cin>>t;
            col_prefix[i][j]=col_prefix[i-1][j]+t;
        }
    }
    int ans=-INF;
    for(int r1=1;r1<=n;r1++){
        for(int r2=r1;r2<=n;r2++){
            int cur=0;int mx=-INF;
            for(int i=1;i<=n;i++){
                cur=max(cur+find(r1,r2,i),find(r1,r2,i));
                mx=max(cur,mx);
            }
            ans=max(ans,mx);
        }
    }
    cout<<ans;
    return 0;
}
