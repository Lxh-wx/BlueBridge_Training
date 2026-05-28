#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int p,q;
int x,y;

int gcd(int a,int b){
        if(a%b==0){
            return b;
        }else return gcd(b,a%b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>x>>y;
    int S=x*y;
    int ans=0;
    if(y%x!=0){
        cout<<ans;
        return 0;
    }
    for(int i=1;i*i<=S;i++){
        if(S%i==0){
            q=i;
            p=S/i;
            if(gcd(q,p)==x){
                ans+=2;
                if(q==p)
                ans--;
            }
        }
    }
    cout<<ans;
    return 0;
}
