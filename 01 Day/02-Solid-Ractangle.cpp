// * * * * * * 
// * * * * * * 
// * * * * * * 

#include<iostream>
using namespace std;
int main(){
    int rowCount, colomCount;
    cout << "Enter the value of row and col: ";
    cin >> rowCount >> colomCount;
    for(int row = 0; row < rowCount; row = row + 1)
    {
        for(int col = 0; col < colomCount; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}