#include <iostream>
using namespace std;

int main()
{
    // Array declaration and separate initialization
    int arr[6];

    arr[5]=5;
    arr[0]=9;
    arr[1]=15;
    arr[2]=7;
    arr[3]=12;
    arr[4]=4;

    // Iterate over the array
    for(int idx=0; idx<5; idx++)
    {
        // Print out each element in a new line
        cout << arr[idx] << endl;
    }
    return 0;
}