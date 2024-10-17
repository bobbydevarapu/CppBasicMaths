#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,t1,t2=2,next;
  cout<<"Enter n :";
  cin>>n;
  cout<<"Enter t1 : ";
  cin>>t1;
  cout<<"Enter t2 : ";
  cin>>t2;
  for(int i=t1;i<=n;i++)
  {
    next=t1+t2;
    t1=t2;
    t2=next;
    cout<<next<<" ";
  }
  return 0;
}