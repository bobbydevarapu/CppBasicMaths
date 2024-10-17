#include <bits/stdc++.h>
using namespace std;

void Triangle(int a, int b, int c, int h) {
    int peri = a + b + c;
    double area = 0.5 * b * h;
    
    cout << "Perimeter of Triangle is " << peri << endl;
    cout << "Area of Triangle is " << area << endl;
}
int main() { 
    int a, b, c, h;
    cout << "Enter the values of a, b, c, h: "<<endl;
    cin >> a >> b >> c >> h;
    Triangle(a, b, c, h); 
    return 0;
}
