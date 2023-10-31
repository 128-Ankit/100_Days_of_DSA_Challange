#include<iostream>
using namespace std;

char GetMarks(int marks)
{
    // if(marks >= 90)
    // {
    //     return 'A';
    // }
    // else if (marks >= 75)
    // {
    //     return 'B';
    // }
    // else if (marks >= 55)
    // {
    //     return 'C';
    // }
    // else
    // {
    //     return 'D';
    // }   

    switch (marks/10)
    {
    case 10: return 'A'; break;
    case 9: return 'A'; break;
    case 8: return 'B'; break;
    case 7: return 'C'; break;
    
    default: return 'D'; break;
    }
}
int main()
{
    // int marks;
    // cout << "Enter the student marks: ";
    // cin >> marks;
    // char result = GetMarks(marks);
    // cout << "you got: " << result;  

    for(int i = 0; i <= 100; i++) 
    {
        char ans = GetMarks(i);
        cout << "Grade for marks = " << i << " is " << ans << endl;
    }
}