#include<iostream>
using namespace std;
string FindEvenOdd(int num){
    if(num % 2 == 0)
        return  "Even";
    else
        return "Odd";
}
int main()
{
    int n;
    cout << "Enter number to check is Even or Odd: ";
    cin >> n;
    string res = FindEvenOdd(n);
    cout << "Given numer is " << res;
    return 0;
}