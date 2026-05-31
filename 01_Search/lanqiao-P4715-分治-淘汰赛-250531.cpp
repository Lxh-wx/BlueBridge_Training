#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
int t[135];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int m1=0,m2=0;
    int p1,p2;
    for(int i=1;i<=1<<n;i++){
        cin>>t[i];
        if(i<=1<<n-1){
            m1=max(t[i],m1);
            if(m1==t[i])p1=i;
        }else{
            m2=max(t[i],m2);
            if(m2==t[i])p2=i;
        }
    }
    if(m1>m2){
        cout<<p2;
    }else{
        cout<<p1;
    }

    return 0;
}
