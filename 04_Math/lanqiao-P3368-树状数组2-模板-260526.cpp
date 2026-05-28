#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int a[500005];
ll tree[500005];

int lowbit(int x){
    int t=(x&-x);
    return t;
}
void update(int x,int y){
    while(x<=n){
        tree[x]+=y;
        x+=lowbit(x);
    }
}
ll quary(int x){
    ll ans=0;
    while(x>0){
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,a[i]-a[i-1]);
    }
    for(int i=1;i<=m;i++){
        int t;
        cin>>t;
        if(t==1){
            int x,y,k;
            cin>>x>>y>>k;
            update(x,k);
            update(y+1,-k);
        }else if(t==2){
            int x;
            cin>>x;
            int t=quary(x);
            cout<<t<<endl;
        }
    }

    return 0;
}
