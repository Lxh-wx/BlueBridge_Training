#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m,p;
int fa[5005];

int find(int x){
    if(fa[x]==x)return x;
    return fa[x]=find(fa[x]);
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    for(int i=1;i<=m;i++){
        int m1,m2;
        cin>>m1>>m2;
        m1=find(m1);m2=find(m2);
        fa[m2]=m1;
    }
    for(int i=1;i<=p;i++){
        int p1,p2;
        cin>>p1>>p2;
        if(find(p1)==find(p2)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
