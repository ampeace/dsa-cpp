#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization of an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    cout << "Element at index 2: " << arr[2] << endl;

    // Modifying elements of the array
    arr[3] = 6;
    cout << "Modified element at index 3: " << arr[3] << endl;

    // Calculating the sum of all elements
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}