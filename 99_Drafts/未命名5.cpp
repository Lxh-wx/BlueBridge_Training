#include <iostream>
using namespace std;
char a[] = "sABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n;
char nxt[100];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  int temp;
  int v=0;
  while(n>0){
  	v++; 
    temp=n%26+26;
    nxt[v]=a[temp];
    if(n<=26) break;
    if(temp==26){
    	n=n/26-1;
    	continue;
	} 
    n=n/26; 
  }
  for(int i=v;i>0;i--){
    cout<<nxt[i];
  }
  return 0;
}
