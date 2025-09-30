#include <iostream>
using namespace std;

void siftDown(int data[], int size, int root) {
    int maxIdx = root;
    int leftChild = 2 * root + 1;
    int rightChild = 2 * root + 2;

    if (leftChild < size && data[leftChild] > data[maxIdx])
        maxIdx = leftChild;
    if (rightChild < size && data[rightChild] > data[maxIdx])
        maxIdx = rightChild;
    if (maxIdx != root) {
        swap(data[root], data[maxIdx]);
        siftDown(data, size, maxIdx);
    }
}

void heap_Sort(int data[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        siftDown(data, size, i);

    for (int i = size - 1; i > 0; i--) {
        swap(data[0], data[i]);
        siftDown(data, i, 0);
    }
}

int main() {
    int numbers[] = {20, 3, 15, 7, 9, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    heap_Sort(numbers, length);

    for (int i = 0; i < length; i++)
        cout << numbers[i] << " ";
}
