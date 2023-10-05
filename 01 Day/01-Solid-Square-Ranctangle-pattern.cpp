//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
#include <iostream>
using namespace std;
int main()
{
    cout << "Wellcome to pattern World!\n";
    int n;
    cout << "enter no: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}