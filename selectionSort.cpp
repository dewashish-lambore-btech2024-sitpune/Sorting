#include <iostream>
using namespace std;

void selection_Sort(int data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (data[j] < data[smallest])
                smallest = j;
        }
        swap(data[i], data[smallest]);
    }
}

int main() {
    int numbers[] = {45, 12, 78, 34, 23};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    selection_Sort(numbers, length);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++)
        cout << numbers[i] << " ";
}
