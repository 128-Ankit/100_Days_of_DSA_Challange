#include<iostream>
using namespace std;

void CountNumber(int num)
{
    for(int i = 1; i <= num; i = i+1)
    {
        cout << i << endl;
        // return i;
        // cout << endl;
    }
}
int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    CountNumber(N);
    // int res = CountNumber(N);
    // cout << res;
    return 0;
}