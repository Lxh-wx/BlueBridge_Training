#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,k;
int tree[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    int mx=0;
    for(int i=1;i<=n;i++){
        cin>>tree[i];
        mx=max(mx,tree[i]);
        }
    int r,l,ans=0;
    r=mx,l=1;
    while(l<=r){
        int mid=(r+l)/2;
        ll count=0;
        for(int i=1;i<=n;i++){
            count+=tree[i]/mid;
        }
        if(count>=k){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
