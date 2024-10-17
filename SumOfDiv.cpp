#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;
        for (int i = 1; i <= N; i++)
        {
            long long count = N / i;
            sum += i * count;
        }
        
        return sum;
    }
};
int main()
{
  int N;
  cout<<"Enter N value : ";
  cin>>N;
  Solution obj;
  cout<<"Sum of divisors is :"<<N<<obj.sumOfDivisors(N)<<endl;
  return 0;
}