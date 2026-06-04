#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

// P8801 [蓝桥杯 2022 国 B] 最大数字
// 对N的每位数字：+1(9→0)最多A次，-1(0→9)最多B次，求最大可能数字
vector<int> n;
int a;
int b;
int vis[10]={1,2,3,4,5,4,3,2,1,0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t>>a>>b;
    while(t>0){
        int m=t%10;
        t/=10;
        n.push_back(m);
    }

    // for(int i=n.size()-1;i>=0;i--){
    //     cout<<n[i]<<' ';
    // }
    // cout<<endl;

    for(int i=n.size()-1;i>=0;i--){
        if(a==0&&b==0)break;
        if(n[i]==9)continue;
        if(n[i]==4){
            if(max(a,b)>=5){
                if(a>b){
                    a-=5;
                }else{
                    b-=5;
                }
                n[i]=9;
            }else{
                n[i]+=a;
                a=0;
            }

        }else if(n[i]<4){
            if(b>=vis[n[i]]){
                b-=vis[n[i]];
                n[i]=9;
            }else if(a>=10-vis[n[i]]){
                a-=10-vis[n[i]];
                n[i]=9;
            }else{
                n[i]+=a;
                a=0;
            }
        }else if(n[i]>4){
            if(a>=vis[n[i]]){
                a-=vis[n[i]];
                n[i]=9;
            }else if(b>=10-vis[n[i]]){
                b-=10-vis[n[i]];
                n[i]=9;
            }else{
                n[i]+=a;
                a=0;
            }
        }
    }
    for(int i=n.size()-1;i>=0;i--){
        cout<<n[i];
    }
    return 0;
}
