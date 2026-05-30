#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int L,n,m;
int dis[50005];

bool check(int mid){
    int cur=0;
    int count=0;
    for(int i=1;i<=n+1;i++){
        if(dis[i]-dis[cur]>=mid){
            cur=i;
        }else{
            count++;
        }
    }
    if(count<=m){
        return true;
    }else{
        return false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>L>>n>>m;
    dis[n+1]=L;
    for(int i=1;i<=n;i++){
        cin>>dis[i];
    }
    int r,l,ans=0;
    r=L;l=0;
    while(r>=l){
        int mid=(r+l)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
