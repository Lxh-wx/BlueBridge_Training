#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
struct text{
    int b;
    int e;
};
text t[1000005];
bool cmp(text a,text c){
    if(a.e!=c.e){
        return a.e<c.e;
    }else{
        return a.b<c.b;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i].b>>t[i].e;
    }
    sort(t+1,t+n+1,cmp);
    int ans=0;
    int cur=0;
    for(int i=1;i<=n;i++){
        if(t[i].b>=cur){
            ans++;
            cur=t[i].e;
        }
    }
    cout<<ans;
    return 0;
}
