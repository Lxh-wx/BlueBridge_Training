#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
long  a[500005];
ll tree[500005];

int lowbit(int x){
    ll t;
    return t=(x&(-x));
}

ll quary(int x){
    ll ans=0;
    while(x>0){
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}

void update(int x,int y){
    while(x<=n){
        tree[x]+=y;
        x+=lowbit(x);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,a[i]);
    }
    for(int i=1;i<=m;i++){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1){
            update(x,y);
        }else if(t==2){
            ll sum=0;
            sum=quary(y)-quary(x-1);
            cout<<sum<<endl;
        }
    }
    return 0;
}
