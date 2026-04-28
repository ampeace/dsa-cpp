//Binary search implementation
 #include <iostream>
using namespace std;

void insert(int heap[], int &size, int value) {
    size++;
    int i = size;
    heap[i] = value;

    // Heapify up (for MIN heap)
    while(i > 1 && heap[i] < heap[i/2]) {
        swap(heap[i], heap[i/2]);
        i = i / 2;
    }
}

void deleteMin(int heap[], int &size) {
    if(size == 0) {
        cout << "Heap is empty\n";
        return;
    }

    // Step 1: Replace root with last element
    heap[1] = heap[size];
    size--;

    int i = 1;

    // Step 2: Heapify down (MIN heap)
    while(true) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int smallest = i;

        if(left <= size && heap[left] < heap[smallest])
            smallest = left;

        if(right <= size && heap[right] < heap[smallest])
            smallest = right;

        if(smallest != i) {
            swap(heap[i], heap[smallest]);
            i = smallest;
        } else {
            break;
        }
    }
}

void display(int heap[], int size) {
    for(int i = 1; i <= size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int heap[100];
    int size = 0;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        insert(heap, size, x);
    }

    cout << "Min Heap:\n";
    display(heap, size);

    // Delete root (minimum)
    deleteMin(heap, size);

    cout << "After deletion (Min Heap):\n";
    display(heap, size);

    return 0;
}