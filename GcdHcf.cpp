#include<bits/stdc++.h>
using namespace std;
class Hcf{
public:
int Gcd(int a,int b)
{
  while(a>0 && b>0)
  {
    if(a>b) a%=b;
    else b%=a;
  }
  if(a==0) return b;
    else return a;
} 
};

int main()
{
   int a,b;
   cout<<"Enter a:";
   cin>>a;
   cout<<"Enter b";
   cin>>b;
   Hcf h;
   cout<<"GCD of "<<a<<" and "<<b<<" is "<<h.Gcd(a,b);
   return 0;
}