#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int a[500005];
int tree[500005];

int lowbit(int i){
    int t;
    return t=i&-i;
}

void update(int i,int a){
    while(i<=n){
        tree[i]+=a;
        i+=lowbit(i);
    }
}

int quarry(int x){
    int ans=0;
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
        update(i,a[i]);
    }
    for(int i=1;i<=m;i++){
        int t;cin>>t;
        int x,y;cin>>x>>y;
        if(t==1){
            update(x,y);
        }else{
            cout<<quarry(y)-quarry(x-1)<<"\n";
        }
    }

    return 0;
}
