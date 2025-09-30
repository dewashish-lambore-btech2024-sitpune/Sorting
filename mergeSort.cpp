#include <iostream>
using namespace std;

void mergeArrays(int data[], int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;

    int A[size1], B[size2];

    for (int i = 0; i < size1; i++) A[i] = data[left + i];
    for (int j = 0; j < size2; j++) B[j] = data[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < size1 && j < size2) {
        if (A[i] <= B[j]) data[k++] = A[i++];
        else data[k++] = B[j++];
    }

    while (i < size1) data[k++] = A[i++];
    while (j < size2) data[k++] = B[j++];
}

void merge_Sort(int data[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_Sort(data, left, mid);
        merge_Sort(data, mid + 1, right);
        mergeArrays(data, left, mid, right);
    }
}

int main() {
    int numbers[] = {20, 3, 15, 7, 9, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    merge_Sort(numbers, 0, length - 1);

    for (int i = 0; i < length; i++)
        cout << numbers[i] << " ";
}
