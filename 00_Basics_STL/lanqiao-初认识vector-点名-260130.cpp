#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> v;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int v[n];
    for(int i=0;i<n;i++){
    	cin>>v[i];
	}
	int a;
	for(int j=0;j<m;j++){
		cin>>a;
		cout<<v[a-1]<<"\n";
	}
    return 0;
}

