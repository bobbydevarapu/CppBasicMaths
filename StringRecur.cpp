#include<bits/stdc++.h>
using namespace std;
void StringRev(string s)
{
  int i,n;
  if(i>=n/2)return ;
  if(s[i]!=s[n-i-1])
  {
    swap(s[i],s[n-i-1]);
  }
  StringRev(s.substr(i+1));
  StringRev(s.substr(0,i));
}
int main()
{
  string s;
  cout<<"Enter s :";
  cin>>s;
  StringRev(s);
  cout<<"Reversed string is :"<<s;
  return 0;
}