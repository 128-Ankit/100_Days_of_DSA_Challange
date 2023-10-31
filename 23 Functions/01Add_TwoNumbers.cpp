#include<iostream>
using namespace std;
int add(int a, int b) //function declearation
{
    int result = a + b;
    cout <<"Address of a and b in add() function" << &a << endl << &b << endl;
    return result;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b : \n";
    cin >> a >> b;
    int sum = add(a, b); //function calling
    cout << "Result of a and b is: " << sum;
    cout <<"Address of a and b in main() function" << &a << endl << &b << endl;
    return 0;
}