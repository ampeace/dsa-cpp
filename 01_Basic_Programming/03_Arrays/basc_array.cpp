#include <iostream>
using namespace std;

int main() {
    // 1. Declaration and Initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Updating an element (e.g., changing the 3rd element)
    numbers[2] = 100;

    // 3. Calculating size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 4. Traversing and Printing the array
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
