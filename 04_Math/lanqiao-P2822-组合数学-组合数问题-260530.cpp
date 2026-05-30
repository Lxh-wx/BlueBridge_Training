#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int t,k;
int C[2005][2005];
int s[2005][2005];

void init(int n){
    for(int i=0;i<=n+2;i++){
        if(i<=n){
            C[i][0]=1%k;
            for(int j=1;j<=i;j++){
                C[i][j]=(C[i-1][j-1]+C[i-1][j])%k;
            }
        }
        if(i>=2){
            for(int j=0;j<=i-2;j++){
                if(C[i-2][j]!=0){
                    C[i-2][j]=0;
                }else{
                    C[i-2][j]=1;
                }
            }
        }
    }
}
void sum(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int ans = C[i][j];
            if(j > 0) ans += s[i][j-1];
            if(i > 0) ans += s[i-1][j];
            if(i > 0 && j > 0) ans -= s[i-1][j-1];
            s[i][j] = ans;
        }
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t>>k;
    init(2002);
    sum(2002);
    for(int i=1;i<=t;i++){
        int x,y;
        cin>>x>>y;
        if(y>x)y=x;
        cout<<s[x][y]<<"\n";
    }
    return 0;
}
