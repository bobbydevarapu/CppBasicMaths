#include<bits/stdc++.h>
using namespace std;
void CountNum(int n)
{
  int cont=0;
  while(n>0)
  {
    n/=10;
    cont++;
  }
  cout<<"Count is : "<<cont;
}
int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  CountNum(n);
  return 0;
}