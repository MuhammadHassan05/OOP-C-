///////question 1
//#include<iostream>
//using namespace std;
//
///////part a
//int* AllocateArray(int& size)
//{
//    cout << "Enter the size of the array: " << endl;
//    cin >> size;
//    return new int[size];
//}
//
//
////// part b
//void OutputArray(int* myArray, const int& size)
//{
//    for (int i = 0; i < size; i++) {
//        cout << myArray[i] << " " << endl;
//    }
//    cout << endl;
//}
//
////// part c
//void DoubleTheArray(int*& myArray, int& size)
//{
//    int newSize = size * 2;
//    int* newArray = new int[newSize];
//    for (int i = 0; i < size; i++)
//    {
//        newArray[i] = myArray[i];
//    }
//    delete[] myArray;
//    size = newSize;
//    myArray = newArray;
//
//}
//
/////// part d
//int* CompressArray(int* myArray, int& size)
//{
//    if (size == 0)
//    {
//        return myArray;
//    }
//    int* compressedArray = new int[size];
//    int index = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (i == 0 || myArray[i] != myArray[i - 1]) {
//            compressedArray[index++] = myArray[i];
//        }
//    }
//    size = index;
//    return compressedArray;
//}
//
/////// part e
//void Input(int* myArray, int& size)
//{
//    size = 1;
//    myArray = new int[size];
//    int input;
//    int index = 0;
//
//    while (true) {
//        cout << "Enter an integer (-1 to end): ";
//        cin >> input;
//        if (input == -1)
//        {
//            break;
//        }
//
//        if (index >= size)
//        {
//            DoubleTheArray(myArray, size);
//        }
//
//        myArray[index++] = input;
//    }
//    myArray = CompressArray(myArray, index);
//
//}
//
//////part f
//int* RemoveConsecutiveOccurrences(int* myArray, int& size)
//{
//    if (size == 0)
//        return myArray;
//    int* newArray = new int[size];
//    int index = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (i == 0 || myArray[i] != myArray[i - 1])
//        {
//            newArray[index++] = myArray[i];
//        }
//    }
//    delete[] myArray;
//    return CompressArray(newArray, index);
//}
//
///////part g
//void DeallocateMemory(int* myArray)
//{
//    delete[] myArray;
//}
//
//int main()
//{
//    int size;
//    int* myArray = AllocateArray(size);
//
//    Input(myArray, size);
//    OutputArray(myArray, size);
//
//    myArray = RemoveConsecutiveOccurrences(myArray, size);
//    OutputArray(myArray, size);
//
//    DeallocateMemory(myArray);
//    return 0;
//
//}


///////question 2
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void ReadName(char* name) {
//    cout << "Enter the name: ";
//    cin.getline(name, 100);
//}
//
//char* FindAndReplaceString(const char* str, const char* toFind, const char* toReplace) {
//    int strLen = strlen(str);
//    int toFindLen = strlen(toFind);
//    int toReplaceLen = strlen(toReplace);
//
//    // Count occurrences of toFind in str
//    int count = 0;
//    for (int i = 0; i <= strLen - toFindLen; i++) {
//        if (strncmp(&str[i], toFind, toFindLen) == 0) {
//            count++;
//        }
//    }
//
//    // Calculate new size
//    int newSize = strLen + count * (toReplaceLen - toFindLen) + 1;
//    char* newStr = new char[newSize];
//
//    int i = 0, j = 0;
//    while (i < strLen) {
//        if (strncmp(&str[i], toFind, toFindLen) == 0) {
//            strcpy_s(&newStr[j], newSize - j, toReplace);  // Safe version of strcpy
//            j += toReplaceLen;
//            i += toFindLen;
//        }
//        else {
//            newStr[j++] = str[i++];
//        }
//    }
//    newStr[j] = '\0';
//    return newStr;
//}
//
//int main() {
//    char name[100];
//    ReadName(name);
//
//    cout << "Entered name: " << name << endl;
//
//    char toFind[] = "ali";      // Change this to the substring you want to replace
//    char toReplace[] = "hassan";   // Change this to the replacement substring
//
//    char* newString = FindAndReplaceString(name, toFind, toReplace);
//    cout << "New String: " << newString << endl;
//
//    delete[] newString;
//    return 0;
//}
