#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0;
  cout<<"enter n :";
  cin>>n;
  for(int i=1;i*i<=n;i++)
  {
    if(n%i==0)
    {
      cnt++;
    if((n%i)!=i) cnt++;
    } 
  }
  if(cnt==2) cout<<"It s prime : "<<n;
  else cout<<"It s not prime : "<<n;
  return 0;
}
