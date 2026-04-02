#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);   // insert into heap
    }

    cout << "Heap elements (largest to smallest):\n";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();  // remove top
    }

    return 0;
}