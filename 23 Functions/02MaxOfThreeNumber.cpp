#include <iostream>
using namespace std;

int FindMax(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= z && y >= x)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter three number to find maximum of them: \n";
    cin >> a >> b >> c;
    int max = FindMax(a, b, c);
    cout << "Maximum of three number is: " << max;
    return 0;
}