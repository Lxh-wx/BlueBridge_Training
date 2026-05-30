#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,p;
int diff[5000005];
int a[5000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        diff[i]=a[i]-a[i-1];
    }
    for(int i=1;i<=p;i++){
        int a1,a2,d;
        cin>>a1>>a2>>d;
        diff[a1]+=d;
        diff[a2+1]-=d;
    }
    int m=0;
    int mi=INF;
    for(int i=1;i<=n;i++){
        m+=diff[i];
        mi=min(m,mi);
    }
    cout<<mi;
    return 0;
}
