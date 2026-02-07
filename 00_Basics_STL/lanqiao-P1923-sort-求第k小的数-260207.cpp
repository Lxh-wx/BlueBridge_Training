#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int a[5000005];
int k;


int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	int x=0,y=0;
	cout<<a[k];
    return 0;
}

