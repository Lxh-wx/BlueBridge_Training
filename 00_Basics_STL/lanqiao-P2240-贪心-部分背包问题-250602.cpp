#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,t;
struct gold{
    int m;
    int v;
    double b;
} g[105];
bool cmp(gold a,gold c){
    return a.b>c.b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>g[i].m>>g[i].v;
        g[i].b=(double)g[i].v/(double)g[i].m;
    }
    sort(g+1,g+n+1,cmp);
    double ans=0;
    for(int i=1;i<=n;i++){
        if(t>=g[i].m){
            ans+=g[i].v;
            t-=g[i].m;
        }else if(t<g[i].m && t!=0){
            ans+=(t*g[i].b);
            t=0;  
        }
        if(t==0){
            break;
        }
    }
    printf("%.2f",ans);


    return 0;
}
