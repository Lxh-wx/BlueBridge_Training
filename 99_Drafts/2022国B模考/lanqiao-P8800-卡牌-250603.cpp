#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

// P8800 [蓝桥杯 2022 国 B] 卡牌
// n种牌，每种a[i]张，可手写最多b[i]张空白牌，共m张空白牌
// 每套需每种牌各1张，求最多能凑几套
ll n,m;
int a[200005];
int b[200005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int mi=INF;
    for(int i=1;i<=n;i++){
        cin>>b[i];
        if(a[i]+b[i]<mi){
            mi=a[i]+b[i];
        }
    }
    int r,l,ans=0;
    r=mi;l=0;
    while(r>=l){
        int mid=(r+l)/2;
        ll sum=0;
        for(int i=1;i<=n;i++){
            if(a[i]>=mid)continue;
            sum+=mid-a[i];
        }
        if(sum<=m){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        } 
    }
    cout<<ans;
    return 0;
}
