#include<iostream>
using namespace std;
int FindFactorial(int num){
    int res = 1;
    for(int i = 1; i <= num; i = i+1)
    {
        res = res * i;
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter a number to find the factorial: ";
    cin >> n;
    int result = FindFactorial(n);
    cout << "Factorial of the given number is: " << result;
    return 0;
}