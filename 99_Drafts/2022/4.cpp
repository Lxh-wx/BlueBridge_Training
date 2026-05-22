#include <iostream>
using namespace std;
int n;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   cin>>n;
   for(int i=1;i<=n;i++){
     int l=0;
     l=2*max(n-i,i-1);
     cout<<l<<"\n";
   }
  return 0;
}
