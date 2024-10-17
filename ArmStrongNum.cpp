#include<bits/stdc++.h>
using namespace std;
int ArmStrong(int n)
{
  int sum=0;
  int dup=n;
  while(n>0)
  {
    int ld=n%10;
    sum=sum+(ld*ld*ld);
    n/=10;
  }
  if(sum==dup)
  {
    cout<< "ArmStrong  "<<endl;
  }
  else{
    cout<<"Not ArmStrong num "<<endl;
}
}
int main()
{
  int n;
  cout<<"Enter a number:";
  cin>>n;
  ArmStrong(n);
  return 0;
}