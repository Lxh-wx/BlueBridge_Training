#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,x;
int a[100005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    ll ans=0;
    for(int i=1;i<n;i++){
        int s=a[i]+a[i+1];
        if(s>x){
            int diff=s-x;
            if(a[i+1]>=diff){
                a[i+1]-=diff;
                ans+=diff;
            }else if(a[i+1]<diff){
                int diff2=diff-a[i+1];
                ans+=a[i+1];
                a[i+1]=0;
                if(a[i]>=diff2){
                    a[i]-=diff2;
                    ans+=diff2;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
