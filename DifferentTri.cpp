#include<bits/stdc++.h>
using namespace std;
void Tri(int a,int b,int c){
  if(a==b && b==c && c==a)
  {
    cout<<"Equilateral Triangle"<<endl;
  }
  else if(a==b || b==c || c==a)
  {
    cout<<"Isosceles Triangle"<<endl;
  }
  else
  {
    cout<<"Scalene Triangle"<<endl;
  }
}
int main()
{
  int a,b,c;
  cout<<"Enter a,b,c values :"<<endl;
  cin>>a>>b>>c;
  Tri(a,b,c);
  return 0;
}