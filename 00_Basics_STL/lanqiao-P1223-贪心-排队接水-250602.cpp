#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
int n;
struct people{
    int t;
    int id;
}p[1005];
int s[1005];
bool cmp(people a,people b){
    return a.t<b.t;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i].t;
        p[i].id=i;
    }
    sort(p+1,p+1+n,cmp);
    double sum=0;
    for(int i=1;i<=n;i++){
        cout<<p[i].id<<' ';
        s[i]=s[i-1]+p[i].t;
        if(i!=n)
        sum+=s[i];
    }
    cout<<endl;
    double avg=0;
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}
