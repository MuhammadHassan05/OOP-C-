//#include <iostream>
//using namespace std;
//
//class MyString {
//    char* str;
//    int length;
//
//    // Manual strlen
//    int strLength(const char* s) const {
//        int len = 0;
//        while (s[len] != '\0') len++;
//        return len;
//    }
//
//    // Manual strcpy
//    void strCopy(char* dest, const char* src) {
//        int i = 0;
//        while ((dest[i] = src[i]) != '\0') i++;
//    }
//
//    // Manual strcat
//    void strCat(char* dest, const char* src) {
//        int i = 0;
//        while (dest[i] != '\0') i++;
//        int j = 0;
//        while ((dest[i++] = src[j++]) != '\0');
//    }
//
//    // Manual strcmp
//    int strCompare(const char* s1, const char* s2) const {
//        int i = 0;
//        while (s1[i] != '\0' && s2[i] != '\0') {
//            if (s1[i] != s2[i])
//                return s1[i] - s2[i];
//            i++;
//        }
//        return s1[i] - s2[i];
//    }
//
//public:
//    // Constructors
//    MyString() {
//        str = new char[1];
//        str[0] = '\0';
//        length = 0;
//    }
//
//    MyString(const char* input) {
//        length = strLength(input);
//        str = new char[length + 1];
//        strCopy(str, input);
//    }
//
//    MyString(const MyString& other) {
//        length = other.length;
//        str = new char[length + 1];
//        strCopy(str, other.str);
//    }
//
//    ~MyString() {
//        delete[] str;
//    }
//
//    // Assignment
//    MyString& operator=(const MyString& other) {
//        if (this != &other) {
//            delete[] str;
//            length = other.length;
//            str = new char[length + 1];
//            strCopy(str, other.str);
//        }
//        return *this;
//    }
//
//    // + operator
//    MyString operator+(const MyString& other) {
//        int newLength = length + other.length;
//        char* newStr = new char[newLength + 1];
//        strCopy(newStr, str);
//        strCat(newStr, other.str);
//
//        MyString result(newStr);
//        delete[] newStr;
//        return result;
//    }
//
//    // += operator
//    MyString& operator+=(const MyString& other) {
//        int newLength = length + other.length;
//        char* newStr = new char[newLength + 1];
//        strCopy(newStr, str);
//        strCat(newStr, other.str);
//
//        delete[] str;
//        str = newStr;
//        length = newLength;
//        return *this;
//    }
//
//    // Comparison
//    bool operator==(const MyString& other) const {
//        return strCompare(str, other.str) == 0;
//    }
//
//    bool operator!=(const MyString& other) const {
//        return strCompare(str, other.str) != 0;
//    }
//
//    bool operator<(const MyString& other) const {
//        return strCompare(str, other.str) < 0;
//    }
//
//    bool operator>(const MyString& other) const {
//        return strCompare(str, other.str) > 0;
//    }
//
//    // Indexing
//    char& operator[](int index) {
//        return str[index];
//    }
//
//    // () reverse
//    MyString operator()() const {
//        MyString rev(*this);
//        for (int i = 0, j = length - 1; i < j; ++i, --j) {
//            char temp = rev.str[i];
//            rev.str[i] = rev.str[j];
//            rev.str[j] = temp;
//        }
//        return rev;
//    }
//
//    // Input/output
//    friend ostream& operator<<(ostream& out, const MyString& s) {
//        out << s.str;
//        return out;
//    }
//
//    friend istream& operator>>(istream& in, MyString& s) {
//        char temp[1000];
//        in >> temp;
//        delete[] s.str;
//        s.length = s.strLength(temp);
//        s.str = new char[s.length + 1];
//        s.strCopy(s.str, temp);
//        return in;
//    }
//
//    // Case conversions
//    void toUpperCase() {
//        for (int i = 0; i < length; ++i) {
//            if (str[i] >= 'a' && str[i] <= 'z')
//                str[i] = str[i] - ('a' - 'A');
//        }
//    }
//
//    void toLowerCase() {
//        for (int i = 0; i < length; ++i) {
//            if (str[i] >= 'A' && str[i] <= 'Z')
//                str[i] = str[i] + ('a' - 'A');
//        }
//    }
//
//    void toSentenceCase() {
//        bool capitalize = true;
//        for (int i = 0; i < length; ++i) {
//            if (capitalize && str[i] >= 'a' && str[i] <= 'z') {
//                str[i] = str[i] - ('a' - 'A');
//                capitalize = false;
//            }
//            else if (str[i] == ' ' || str[i] == '.') {
//                capitalize = true;
//            }
//            else if (str[i] >= 'A' && str[i] <= 'Z') {
//                str[i] = str[i] + ('a' - 'A');
//                capitalize = false;
//            }
//            else {
//                capitalize = false;
//            }
//        }
//    }
//
//    // Word count
//    int countWords() const {
//        int count = 0;
//        bool inWord = false;
//        for (int i = 0; i < length; ++i) {
//            if (str[i] != ' ' && !inWord) {
//                inWord = true;
//                count++;
//            }
//            else if (str[i] == ' ') {
//                inWord = false;
//            }
//        }
//        return count;
//    }
//
//    int lengthOfString() const {
//        return length;
//    }
//
//    MyString reverse() const {
//        return (*this)();
//    }
//
//    void display() const {
//        cout << str << endl;
//    }
//};
//
//// Driver Example
//int main() {
//    MyString s1("hello world");
//    MyString s2(" C++");
//
//    cout << "Original: " << s1 << endl;
//
//    s1.toUpperCase();
//    cout << "Uppercase: " << s1 << endl;
//
//    s1.toLowerCase();
//    cout << "Lowercase: " << s1 << endl;
//
//    s1.toSentenceCase();
//    cout << "Sentence Case: " << s1 << endl;
//
//    cout << "Word Count: " << s1.countWords() << endl;
//
//    cout << "Reversed: " << s1.reverse() << endl;
//
//    MyString s3 = s1 + s2;
//    cout << "Concatenated: " << s3 << endl;
//
//    s1 += s2;
//    cout << "After += : " << s1 << endl;
//
//    cout << "Calling operator(): " << s1() << endl;
//
//    return 0;
//}
