#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f; 
const int N = 100005;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> ci;
    int n,i;
    int min;
    int t;
    string s;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cin>>s;
	 	ci[s]++;
	 	
	  }
	  string max_word="";
	  int max_num=-1;
	  for(auto entry  : ci)
	  {
	  	if(entry.second>max_num)
	  	{
	  		max_num=entry.second;
	  		max_word=entry.first;
		  }
	  }
	  cout<<"\n"<<max_num<<""<<max_word; 
	      return 0;
}

