#include<bits/stdc++.h>
using namespace std;
void Poss(int n)
{
  if(n>0)
  {
    cout<<"Posstive :"<<n<<endl;
  }
  else if(n<0)
  {
    cout<<"Negative :"<<n<<endl;
  }
  else if(n==0) {
    cout<<"Zero :"<<endl;
  }
}
int main()
{
  int n;
  cout<<"Enter n:";
  cin>>n;
  Poss(n);
  return 0;
}
