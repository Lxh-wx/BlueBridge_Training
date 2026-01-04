#include <bits/stdc++.h>

using namespace std;
const int N =100005;
int arr[N];


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    char s[11];
    char com[11]="Completed";
    int p,d;
    for(int i=1;i<=m;i++){
        cin>>p>>d>>s;
        if(!strcmp(s,com)){
            arr[p]=d;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}

