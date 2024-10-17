#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter a num :";
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n* i)!= i)
                count++;
            }
    }
    if (count == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}