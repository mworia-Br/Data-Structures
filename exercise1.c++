#include <iostream>
using namespace std;

int main()
{
    // Aay declaration and separate initialization
    int A[6];

    A[5]=5;
    A[0]=9;
    A[1]=15;
    A[2]=7;
    A[3]=12;
    A[4]=4;

    // Iterate over the Aay
    for(int idx=5; idx>=1; idx--)
    {
        // Print out each element in a new line
        cout << A[idx] << endl;
    }
    return 0;
}