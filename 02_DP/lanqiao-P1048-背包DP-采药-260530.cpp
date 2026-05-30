#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int T,M;
struct cao{
    int t;
    int w;
} c[105];
int dp[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T>>M;
    for(int i=1;i<=M;i++){
        cin>>c[i].t>>c[i].w;
    }
    for(int i=1;i<=M;i++){
        for(int j=T;j>=0;j--){
            if(j>=c[i].t)
            dp[j]=max(dp[j],dp[j-c[i].t]+c[i].w);
        }
    }
    cout<<dp[T];

    return 0;
}
