#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    priority_queue<int ,vector<int>,greater<int>> pq;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        pq.push(t);
    }
    int ans=0;
    while(pq.size()>1){
        int a1=pq.top();
        pq.pop();
        int a2=pq.top();
        pq.pop();
        int t=a1+a2;
        ans+=t;
        pq.push(t);
    }
    cout<<ans;

    return 0;
}
