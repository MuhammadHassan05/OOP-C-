///////solution 1
////#include <iostream>
////using namespace std;
////
////int** userInput(int& N, int*& sizes) {
////    cout << "Enter the number of rows: ";
////    cin >> N;
////    int** jaggedArray = new int* [N];
////    sizes = new int[N]; 
////
////    for (int i = 0; i < N; i++) {
////        cout << "Enter elements for row " << i + 1 << " (end with -1): ";
////        int temp[100];
////        int count = 0;
////        int value;
////
////        while (true) {
////            cin >> value;
////            if (value == -1)
////                break;
////            temp[count++] = value;
////        }
////        jaggedArray[i] = new int[count];
////        sizes[i] = count;
////        for (int j = 0; j < count; j++) {
////            *(jaggedArray[i] + j) = temp[j];
////        }
////    }
////
////    return jaggedArray;
////}
////
////void displayGrid(int** jaggedArray, int N, int* sizes) {
////    cout << " Jagged Grid "<<endl;
////    for (int i = 0; i < N; i++) {
////        for (int j = 0; j < sizes[i]; j++) {
////            cout << *(jaggedArray[i] + j) << " ";
////        }
////        cout << endl;
////    }
////}
////
////void deleteGrid(int** jaggedArray, int N, int* sizes) {
////    for (int i = 0; i < N; i++) {
////        delete[] jaggedArray[i];
////    }
////    delete[] jaggedArray;
////    delete[] sizes;
////}
////
////int main() {
////    int N;           
////    int* sizes;     
////    int** jaggedArray = userInput(N, sizes);
////    displayGrid(jaggedArray, N, sizes);
////    deleteGrid(jaggedArray, N, sizes);
////
////    return 0;
////}
//
////// second solution
//#include <iostream>
//using namespace std;
//
//const int IGNORE_LIMIT = 10000;
//static int rowCount = 0;
//static int* rowSizes = nullptr;
//
//int** userInput(int& N) {
//    cout << "Enter number of rows: ";
//    while (!(cin >> N) || (N <= 0)) {
//        cin.clear();
//        cin.ignore(IGNORE_LIMIT, '\n');
//        cout << "Invalid...! Enter a positive integer ";
//    }
//
//    rowCount = N;
//    rowSizes = new int[N];
//    int** array = new int* [N]; 
//
//    for (int i = 0; i < N; i++) {
//        cout << "Enter elements for row " << i + 1 << " (end with -1)= ";
//
//        int capacity = 4;
//        int size = 0;
//        int* tempRow = new int[capacity];
//
//        while (true) {
//            int val;
//            if (!(cin >> val)) {
//                cin.clear();
//                cin.ignore(IGNORE_LIMIT, '\n');
//                cout << "Non-numeric. Enter integers only (-1 to end row) ";
//                continue;
//            }
//            if (val == -1) {
//                break;
//            }
//            if (size == capacity) {
//                capacity *= 2;
//                int* bigger = new int[capacity];
//                for (int k = 0; k < size; k++) {
//                    *(bigger + k) = *(tempRow + k);
//                }
//                delete[] tempRow;
//                tempRow = bigger;
//            }
//            *(tempRow + size) = val;
//            size++;
//        }
//
//        rowSizes[i] = size;
//        *(array + i) = new int[size];
//        for (int k = 0; k < size; k++) {
//            *(*(array + i) + k) = *(tempRow + k);
//        }
//        delete[] tempRow; 
//    }
//    return array;
//}
//
//void SortBySum(int** array) {
//    for (int i = 0; i < rowCount - 1; i++) {
//        for (int j = 0; j < rowCount - 1 - i; j++) {
//            int sumJ = 0;
//            for (int k = 0; k < rowSizes[j]; k++) {
//                sumJ += *(*(array + j) + k);
//            }
//            int sumNext = 0;
//            for (int k = 0; k < rowSizes[j + 1]; k++) {
//                sumNext += *(*(array + (j + 1)) + k);
//            }
//            if (sumJ > sumNext) {
//                int* tmpPtr = *(array + j);
//                *(array + j) = *(array + (j + 1));
//                *(array + (j + 1)) = tmpPtr;
//                int tmpSize = rowSizes[j];
//                rowSizes[j] = rowSizes[j + 1];
//                rowSizes[j + 1] = tmpSize;
//            }
//        }
//    }
//}
//
//void MergeSmallRowsAndReverse(int** array) {
//    while (true) {
//        int minIndex = -1;
//        int minSize = INT_MAX;
//        for (int i = 0; i < rowCount; i++) {
//            if (rowSizes[i] < 3 && rowSizes[i] < minSize) {
//                minIndex = i;
//                minSize = rowSizes[i];
//            }
//        }
//        if (minIndex == -1) {
//            break;
//        }
//
//        if (minIndex < rowCount - 1) {
//            int newSize = rowSizes[minIndex] + rowSizes[minIndex + 1];
//            int* mergedRow = new int[newSize];
//
//            for (int k = 0; k < rowSizes[minIndex + 1]; k++) {
//                *(mergedRow + k) = *(*(array + (minIndex + 1)) + k);
//            }
//            for (int k = 0; k < rowSizes[minIndex]; k++) {
//                *(mergedRow + (rowSizes[minIndex + 1] + k)) =
//                    *(*(array + minIndex) + k);
//            }
//
//            delete[] * (array + (minIndex + 1));
//            *(array + (minIndex + 1)) = mergedRow;
//            rowSizes[minIndex + 1] = newSize;
//
//            int left = 0;
//            int right = newSize - 1;
//            while (left < right) {
//                int temp = *(*(array + (minIndex + 1)) + left);
//                *(*(array + (minIndex + 1)) + left) =
//                    *(*(array + (minIndex + 1)) + right);
//                *(*(array + (minIndex + 1)) + right) = temp;
//                left++;
//                right--;
//            }
//
//            delete[] * (array + minIndex);
//            for (int r = minIndex; r < rowCount - 1; r++) {
//                *(array + r) = *(array + (r + 1));
//                rowSizes[r] = rowSizes[r + 1];
//            }
//            rowCount--;
//
//        }
//        else {
//            int newSize = rowSizes[minIndex - 1] + rowSizes[minIndex];
//            int* mergedRow = new int[newSize];
//
//            for (int k = 0; k < rowSizes[minIndex - 1]; k++) {
//                *(mergedRow + k) = *(*(array + (minIndex - 1)) + k);
//            }
//            for (int k = 0; k < rowSizes[minIndex]; k++) {
//                *(mergedRow + (rowSizes[minIndex - 1] + k)) =
//                    *(*(array + minIndex) + k);
//            }
//
//            delete[] * (array + (minIndex - 1));
//            *(array + (minIndex - 1)) = mergedRow;
//            rowSizes[minIndex - 1] = newSize;
//
//            int left = 0;
//            int right = newSize - 1;
//            while (left < right) {
//                int temp = *(*(array + (minIndex - 1)) + left);
//                *(*(array + (minIndex - 1)) + left) =
//                    *(*(array + (minIndex - 1)) + right);
//                *(*(array + (minIndex - 1)) + right) = temp;
//                left++;
//                right--;
//            }
//
//            delete[] * (array + minIndex);
//            for (int r = minIndex; r < rowCount - 1; r++) {
//                *(array + r) = *(array + (r + 1));
//                rowSizes[r] = rowSizes[r + 1];
//            }
//            rowCount--;
//        }
//    }
//}
//
//void printArray(int** array) {
//    cout << "Matrix (" << rowCount << " rows)\n";
//    for (int i = 0; i < rowCount; i++) {
//        for (int j = 0; j < rowSizes[i]; j++) {
//            cout << *(*(array + i) + j) << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int main() {
//    int N = 0;
//    int** array = userInput(N);
//
//    cout << "After Input\n";
//    printArray(array);
//
//    SortBySum(array);
//    cout << "After Sorting by Sum\n";
//    printArray(array);
//
//    MergeSmallRowsAndReverse(array);
//    cout << "After Merging & Reversing Small Rows\n";
//    printArray(array);
//
//    for (int i = 0; i < rowCount; i++) {
//        delete[] * (array + i);
//    }
//    delete[] array;
//    delete[] rowSizes;
//
//    return 0;
//}
