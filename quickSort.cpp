#include <iostream>
using namespace std;

int partitionArray(int data[], int start, int end) {
    int pivot = data[end];
    int index = start - 1;

    for (int j = start; j < end; j++) {
        if (data[j] <= pivot) {
            index++;
            swap(data[index], data[j]);
        }
    }

    swap(data[index + 1], data[end]);
    return index + 1;
}

void quick_Sort(int data[], int start, int end) {
    if (start < end) {
        int pivotIndex = partitionArray(data, start, end);
        quick_Sort(data, start, pivotIndex - 1);
        quick_Sort(data, pivotIndex + 1, end);
    }
}

int main() {
    int numbers[] = {25, 17, 31, 13, 2, 8};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    quick_Sort(numbers, 0, length - 1);

    for (int i = 0; i < length; i++)
        cout << numbers[i] << " ";
}
