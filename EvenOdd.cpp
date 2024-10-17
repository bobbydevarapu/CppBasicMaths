#include<bits/stdc++.h>
using namespace std;
void EvenOdd(int x)
{
  if(x%2==0)
  {
    cout<<"Even Num:"<<x<<endl;
  }
  else cout<<"Odd Num:"<<x<<endl;
}
int main()
{
  int x;
  cout<<"Enter num:";
  cin>>x;
  EvenOdd(x);
}