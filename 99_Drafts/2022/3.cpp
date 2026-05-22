#include <iostream>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b,n;
  cin>>a>>b>>n;
  int ans=0;
  int t=1;
  while(ans<n){
    if(t%n==6||t%n==0){
      ans+=b;
    }else{
      ans+=a;
    }
    t++;
  }
  cout<<t-1;
  return 0;
}
