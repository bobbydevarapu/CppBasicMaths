#include<bits/stdc++.h>
using namespace std;
void PrimeNum(int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
      if(n%i==0)
      {
        count=count+1;
        if(count==2)
      {
        cout<<"It' Prime :"<<n;
      }
      else 
      {
        cout<<"Not Prime :"<<n;
      }
      }
  }
}
int main()
{
    cout<<"Enter n value :";
    int n;
    cin>>n;
    PrimeNum(n);
}