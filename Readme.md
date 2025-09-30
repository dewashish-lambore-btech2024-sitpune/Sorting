# 🔄 Sorting in C++

## 🎯 Objective  
To explore and develop **Sorting algorithms in C++**, encompassing **Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort, and Bucket Sort**, while evaluating their performance metrics, complexity characteristics, and practical applications.

---

## 📚 Theoretical Foundation  

Sorting involves organizing data elements in a specified sequence (ascending or descending). Effective sorting techniques are fundamental for enhancing search operations and streamlining data manipulation.

### 🔑 Essential Properties of Sorting Algorithms  
- **Stability**: Preserves the original sequence of equivalent elements.  
- **Memory Usage**: Distinction between in-place (minimal extra space) and out-of-place (requires additional memory).  
- **Performance Analysis**: Evaluation across optimal, worst-case, and typical scenarios.  
- **Methodology**: Classification as comparison-based or non-comparison-based approaches.  

### 🔄 Categories of Sorting Algorithms  

1. **Bubble Sort** → Continuously exchanges neighboring elements when incorrectly ordered.  
2. **Selection Sort** → Iteratively identifies the smallest element and positions it appropriately.  
3. **Insertion Sort** → Constructs sorted sequence incrementally by placing each element in its proper location.  
4. **Merge Sort** → Divide-and-conquer strategy that partitions array and combines sorted segments.  
5. **Quick Sort** → Divide-and-conquer method that reorganizes elements around a pivot value.  
6. **Heap Sort** → Constructs a max heap structure and systematically removes maximum elements.  
7. **Bucket Sort** → Distributes elements across multiple buckets, sorts each independently, then merges. Performs optimally with uniformly distributed input.  

---

## 📋 Algorithms  

### 🧾 Bubble Sort  
1. Begin  
2. Accept array containing `n` elements.  
3. Execute for `i = 0` to `n-1`:  
   - Execute for `j = 0` to `n-i-2`:  
     - If `arr[j] > arr[j+1]`, exchange their positions.  
4. Terminate  

---

### 🧾 Selection Sort  
1. Begin  
2. Accept array containing `n` elements.  
3. Execute for `i = 0` to `n-1`:  
   - Initialize `minIndex = i`.  
   - Execute for `j = i+1` to `n-1`:  
     - If `arr[j] < arr[minIndex]`, set `minIndex = j`.  
   - Exchange `arr[i]` with `arr[minIndex]`.  
4. Terminate  

---

### 🧾 Insertion Sort  
1. Begin  
2. Accept array containing `n` elements.  
3. Execute for `i = 1` to `n-1`:  
   - Store `key = arr[i]`, initialize `j = i-1`.  
   - Repeat while `j >= 0` and `arr[j] > key`:  
     - Move `arr[j]` to position `arr[j+1]`.  
     - Decrease `j` by 1.  
   - Place `key` at position `arr[j+1]`.  
4. Terminate  

---

### 🧾 Merge Sort  
1. Begin  
2. If array contains multiple elements:  
   - Split array into two equal segments.  
   - Recursively apply sorting to both segments.  
   - Combine the two sorted segments.  
3. Terminate  

---

### 🧾 Quick Sort  
1. Begin  
2. If array contains multiple elements:  
   - Select a pivot element.  
   - Reorganize array into two partitions:  
     - Left partition: elements less than pivot.  
     - Right partition: elements greater than pivot.  
   - Recursively apply quick sort to both partitions.  
3. Terminate  

---

### 🧾 Heap Sort  
1. Begin  
2. Construct a max heap from the array elements.  
3. Execute until heap size reduces to 1:  
   - Exchange root (maximum element) with final element.  
   - Decrease heap size by 1.  
   - Restore heap property for root.  
4. Terminate  

---

### 🧾 Bucket Sort  
1. Begin  
2. Accept array containing `n` elements.  
3. Initialize `k` empty buckets.  
4. Assign elements to buckets using a distribution function (e.g., `bucket_index = value * k`).  
5. Sort each bucket independently (using insertion sort or alternative method).  
6. Merge all buckets sequentially to produce sorted array.  
7. Terminate  

---

## 🧩 Performance Comparison Table  

| Algorithm       | Best Case | Worst Case | Average Case | Space Complexity | Stable |
|-----------------|-----------|------------|--------------|------------------|--------|
| Bubble Sort     | O(n)      | O(n²)      | O(n²)        | O(1)             | Yes    |
| Selection Sort  | O(n²)     | O(n²)      | O(n²)        | O(1)             | No     |
| Insertion Sort  | O(n)      | O(n²)      | O(n²)        | O(1)             | Yes    |
| Merge Sort      | O(n log n)| O(n log n) | O(n log n)   | O(n)             | Yes    |
| Quick Sort      | O(n log n)| O(n²)      | O(n log n)   | O(log n)         | No     |
| Heap Sort       | O(n log n)| O(n log n) | O(n log n)   | O(1)             | No     |
| Bucket Sort     | O(n+k)    | O(n²)      | O(n+k)       | O(n+k)           | Yes    |

---

## 🚀 Practical Applications  

- **Bubble Sort** → Learning purposes, minimal datasets.  
- **Selection Sort** → Scenarios where write operations are expensive.  
- **Insertion Sort** → Compact or partially sorted datasets.  
- **Merge Sort** → Large-scale data, external storage sorting, stability requirements.  
- **Quick Sort** → General-purpose applications, practical efficiency.  
- **Heap Sort** → Priority queue implementations, task scheduling systems.  
- **Bucket Sort** → Evenly distributed data (e.g., decimal values, score distributions).  

---

## 🧠 Summary  

- **Bubble, Selection, and Insertion Sort** offer simplicity but demonstrate poor scalability for substantial datasets.  
- **Merge Sort and Quick Sort** represent powerful divide-and-conquer methodologies extensively utilized in production environments.  
- **Heap Sort** proves valuable when constant space requirements and guaranteed O(n log n) performance are essential.  
- **Bucket Sort** achieves exceptional efficiency with uniformly distributed inputs, approaching linear time complexity.  
- Proficiency in sorting algorithms is critical for **data organization, search optimization, and sophisticated algorithm development**.
