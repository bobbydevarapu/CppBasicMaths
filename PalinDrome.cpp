#include<bits/stdc++.h>
using namespace std;
string PalinDrome(int n)
{
    int revnum=0;
    int OrgNum=n;
    while(n!=0)
    {
      int ld=n%10;
      revnum=(revnum*10)+ld;
      n=n/10;
    }
    if(revnum==OrgNum)
    {
      return "Palindorme";
    }
    else
    {
      return "Not Palindorme";
    }
  }
int main()
{
int n;
cout<<"enter num :";
cin>>n;
cout<<PalinDrome(n)<<endl;
return 0;
}