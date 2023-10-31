#include <iostream>
using namespace std;

int FindCirculeArea(int r)
{
    int pi = 3.14;
    int area = 2 * pi * r;
    return area;
}
int main()
{
    int r;
    cout << "Enter the radius of : ";
    cin >> r;
    int area = FindCirculeArea(r);
    cout << ":Area of a circule is :" << area;
    return 0;
}