#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
      int reverse(int x)
      {
        int rev=0;
        while(x>0)
        {
          int lastdig=x%10;
          rev=(rev*10)+lastdig;
          x=x/10;
        }
        return rev;
      }
};
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    Solution s;
    int rev=s.reverse(x);
    cout<<"Reverse of the number is : "<<rev;
    return 0;
}