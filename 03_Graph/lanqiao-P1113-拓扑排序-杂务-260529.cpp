#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int finish[10005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int id,t;
        cin>>id>>t;
        finish[id]=t;
        int p;
        while(cin>>p && p!= 0){
            finish[id]=max(finish[id],finish[p]+t);
        }
        ans=max(ans,finish[id]);
    }
    cout<<ans;
    return 0;
}
