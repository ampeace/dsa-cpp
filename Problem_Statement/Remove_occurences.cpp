//Given an array and a number k, remove all occurrences of k from the array (in-place). Return the number of elements 'remainingSize' left after removing k. Note that removing the occurences is mandatory and will be checked in the main method. There can be anything beyond the first 'remainingSize' elements. It will be ignored.

#include <iostream>
using namespace std;

int removeElement(int arr[], int n, int k) {
    int i = 0; // pointer for position of next valid element
    
    for (int j = 0; j < n; j++) {
        if (arr[j] != k) {
            arr[i] = arr[j];
            i++;
        }
    }
    
    return i; // remaining size
}

int main() {
    int n, k;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> k;
    
    int remainingSize = removeElement(arr, n, k);
    
    cout << remainingSize << endl;
    
    return 0;
}