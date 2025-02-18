//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    const char* sentence = "abandon discontinue vacate # absent missing unavailable # cable wire # calculate compute determine measure # safety security refuge #";
//
//    int wordCount = 1;
//    for (const char* temp = sentence; *temp; temp++) {
//        if (*temp == ' ') 
//           wordCount++;
//    }
//
//    char** words = new char* [wordCount];
//    for (int i = 0; i < wordCount; i++) {
//        words[i] = new char[50];
//    }
//
//    int wordIndex = 0;
//    int charIndex = 0;
//    for (const char* ptr = sentence; *ptr; ptr++) {
//        if (*ptr == ' ') {
//            words[wordIndex][charIndex] = '\0';
//            wordIndex++;
//            charIndex = 0;
//        }
//        else {
//            words[wordIndex][charIndex++] = *ptr;
//        }
//    }
//    words[wordIndex][charIndex] = '\0';
//
//    cout << "Available synonyms groups " << endl;
//    for (int i = 0; i < wordCount; i++) {
//        if (words[i][0] == '#') {
//            cout << endl;
//        }
//        else {
//            cout << words[i] << " ";
//        }
//    }
//    cout << endl << "Enter a word ";
//
//    char* c = new char[20];
//    cin.getline(c, 20);
//
//    if (strlen(c) == 0) {
//        cout << "Empty input...!  Please enter a word " << endl;
//        delete[] c;
//        return 1;
//    }
//
//    int position = -1;
//    for (int i = 0; i < wordCount; i++) {
//        if (strcmp(c, words[i]) == 0) {
//            position = i;
//            break;
//        }
//    }
//
//    if (position == -1) {
//        cout << "Word not found...! Please write a word from the above table " << endl;
//    }
//    else {
//        cout << "Found at " << position << endl;
//        while (position < wordCount && words[position][0] != '#') {
//            position++;
//        }
//        if (position > 0) position--;
//        cout << "Synonyms = " << words[position] << endl;
//    }
//
//    for (int i = 0; i < wordCount; i++) {
//        delete[] words[i];
//    }
//    delete[] words;
//    delete[] c;
//
//    return 0;
//}
