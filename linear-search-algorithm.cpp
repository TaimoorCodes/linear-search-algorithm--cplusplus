#include <iostream>
using namespace std;

int main()
{
    // Ask user the array size
    cout << "Please enter the array size: ";
    int n;
    cin >> n;

    // Declare an array of n size
    int arr[n];

    // Input the array elements
    cout << "Enter the array elements " << n << " times" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Ask the key index to find
    cout << "Enter the number you want to find: ";
    int key;
    cin >> key;

    // Check the key index in the given array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index " << i + 1 << endl;
            return 0;  // exit the program after finding the key
        }
    }

    // If key is not found, print a message
    cout << "Key not found" << endl;
    return 0;
}
