#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
vector<int> p;
int q;
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    vector<int> notp(n+1);
    notp[1]=1;
    for(int i=2;i<=n;i++){
        if(!notp[i]) p.push_back(i);
        for(int e:p){
            if((ll)i*e>n)break;
            notp[e*i]=1;
            if((i%e)==0) break;
        }
    }
    for(int i=1;i<=q;i++){
        int k;
        cin>>k;
        cout<<p[k-1]<<"\n";
    }
    return 0;
}
