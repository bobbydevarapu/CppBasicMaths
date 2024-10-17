#include<bits/stdc++.h>
using namespace std;
void Rect(int l,int b)
{
  cout<<"peri :"<<2*(l+b)<<endl;
  cout<<"area :"<<(l*b)<<endl;
}
int main()
{
  int a,b;
  cout<<"Enter a,b values:"<<endl;
  cin>>a>>b;
  Rect(a,b);
  return 0;
}