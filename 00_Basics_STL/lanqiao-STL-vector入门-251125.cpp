#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

bool cmp(int a,int b){
	return a>b;
}

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v;
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if (a[i]%2==0)
    	{
    		v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"\n";
	}
   return 0;
}

