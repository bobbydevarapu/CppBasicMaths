#include<bits/stdc++.h>
using namespace std;
class SumofNum{
  public:
  int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=(n*(n+1))/2;
    }
    return sum;
  }
};
int main()
{
  int n;
  cout<<"Enter a num :";
  cin>>n;
  SumofNum s;
  cout<<"Sum of num is :"<<s.sum(n);
  return 0;
}