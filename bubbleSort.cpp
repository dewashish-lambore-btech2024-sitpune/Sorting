#include <iostream>
using namespace std;

void bubble_Sort(int data[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool didSwap = false;

        for (int j = 0; j < size - pass - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                didSwap = true;
            }
        }

        // If no swap happened in this pass, array is already sorted
        if (!didSwap) {
            break;
        }
    }
}

int main() {
    int numbers[] = {12, 7, 3, 15, 9};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for (int k = 0; k < length; k++) {
        cout << numbers[k] << " ";
    }
    cout << endl;

    bubble_Sort(numbers, length);

    cout << "Sorted array: ";
    for (int k = 0; k < length; k++) {
        cout << numbers[k] << " ";
    }
    cout << endl;

    return 0;
}
