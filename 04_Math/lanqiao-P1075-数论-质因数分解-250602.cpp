 #include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<n/i;
            break;
        }
    }
    return 0;
}
