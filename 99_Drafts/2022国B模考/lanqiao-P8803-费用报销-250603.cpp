#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

// P8803 [蓝桥杯 2022 国 B] 费用报销
// n张票据(日期+面值)，选票日期差≥K天，总金额≤M，求最大报销额

int n,m,k;
int mouth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int smou[13];
int nex[1005];
int dp[1005][5008];

struct tick{
    int day;
    int v;
} tic[1005];

void initsm(){
    for(int i=1;i<=12;i++){
        smou[i]=smou[i-1]+mouth[i];
    }
    return;
}
int sday(int m,int d){
    return smou[m-1]+d;
}

bool cmp(tick a,tick b){
    return a.day<b.day;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k;
    
    initsm();
    
    for(int i=1;i<=n;i++){
        int m;int d;
        cin>>m>>d>>tic[i].v;
        tic[i].day=sday(m,d);
    }

    sort(tic+1,tic+n+1,cmp);

    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            if(tic[i].day-tic[j].day>=k){
                nex[i]=j;
                break;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=tic[i].v){
                dp[i][j]=max(dp[i][j],dp[nex[i]][j-tic[i].v]+tic[i].v);
            }
        } 
    }
    cout<<dp[n][m];


    return 0;
}
