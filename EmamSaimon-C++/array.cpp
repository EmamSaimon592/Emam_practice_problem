#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int capacity, int element, int position) {
    if (size >= capacity) {
        cout << "Array is full. Insertion not possible.\n";
        return;
    }

    if (position < 0 || position > size) {
        cout << "Invalid position!\n";
        return;
    }

    // Shift elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;
    size++;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 4, 5};
    int size = 4;
    int capacity = 10;

    cout << "Before insertion: ";
    displayArray(arr, size);

    insertElement(arr, size, capacity, 3, 2);

    cout << "After insertion: ";
    displayArray(arr, size);

    return 0;
}
