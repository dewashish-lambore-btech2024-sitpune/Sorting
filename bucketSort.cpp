#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucket_Sort(float data[], int size) {
    // Create buckets
    vector<vector<float>> bucketList(size);

    // Distribute elements into buckets
    for (int i = 0; i < size; i++) {
        int bucketIndex = size * data[i];
        bucketList[bucketIndex].push_back(data[i]);
    }

    // Sort each bucket individually
    for (int i = 0; i < size; i++) {
        sort(bucketList[i].begin(), bucketList[i].end());
    }

    // Merge buckets back into original array
    int pos = 0;
    for (int i = 0; i < size; i++) {
        for (float value : bucketList[i]) {
            data[pos++] = value;
        }
    }
}

int main() {
    float values[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int length = sizeof(values) / sizeof(values[0]);

    cout << "Original array: ";
    for (int i = 0; i < length; i++) cout << values[i] << " ";
    cout << endl;

    bucket_Sort(values, length);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) cout << values[i] << " ";
    cout << endl;

    return 0;
}
