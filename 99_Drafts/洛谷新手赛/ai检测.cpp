#include <bits/stdc++.h>

using namespace std;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    double x[10005];
    double p[10005];
    for(int i=0;i<n;i++){
        cin>>x[i];
}
    double q=0;
    double E=0,E1=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        E+=p[i]*x[i];
        q+=p[i];
    }
    E/=q;
    cout<<E<<endl;
    for(int i=0;i<n;i++){
        E1+=(x[i]-E)*(x[i]-E)*p[i];
    }
    E1/=q;
    cout<<E1;

    return 0;
}

