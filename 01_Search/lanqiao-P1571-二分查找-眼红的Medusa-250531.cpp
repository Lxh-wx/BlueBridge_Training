#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n,m;
int a[100005];
int b[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    set<int> s;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>b[i];
        s.insert(b[i]);
    }
    for(int x:a){
        if(s.count(x)){
            cout<<x<<' ';
        }
    }
    return 0;
}
