#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int L,n,k;
int a[100005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>L>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int r,l,ans=0;
    r=L;l=1;
    while(l<=r){
        int mid=(r+l)/2;
        ll count=0;
        for(int i=2;i<=n;i++){
            if(a[i]-a[i-1]>mid){
                count+=(a[i]-a[i-1]-1)/mid;
            }
        }
        if(count<=k){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
