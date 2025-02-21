//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//private:
//    string title;
//    string author;
//    int ISBN;
//    bool isAvailable;
//
//public:
//    void Set_Book_Details() {
//        cout << "****Enter book details**** ";
//        cout << "Title ";
//        getline(cin, title);
//        cout << "Author ";
//        getline(cin, author);
//        cout << "ISBN ";
//        cin >> ISBN;
//        cout << "Available (1 for Yes, 0 for No): ";
//        cin >> isAvailable;
//        cin.ignore();
//    }
//
//    void Display_Book_Details() {
//        cout << "****Final Book Details**** ";
//        cout << "Title " << title << endl;
//        cout << "Author " << author << endl;
//        cout << "ISBN " << ISBN << endl;
//        cout << "Available " << (isAvailable ? "Yes" : "No") << endl;
//    }
//
//    void BorrowBook() {
//        if (isAvailable) {
//            isAvailable = false;
//            cout << "Book borrowed successfully...! ";
//        }
//        else {
//            cout << "Book not available...! ";
//        }
//    }
//
//    void ReturnBook() {
//        isAvailable = true;
//        cout << "Book returned successfully...! ";
//    }
//};
//
//int main() {
//    Book myBook;
//    myBook.Set_Book_Details();
//
//    string borrowChoice;
//    cout << "Do you want to borrow this book? (yes/no) ";
//    getline(cin, borrowChoice);
//    if (borrowChoice == "yes") {
//        myBook.BorrowBook();
//    }
//    string returnChoice;
//    cout << "Do you want to return the book? (yes/no) ";
//    getline(cin, returnChoice);
//    if (returnChoice == "yes") {
//        myBook.ReturnBook();
//    }
//    myBook.Display_Book_Details();
//
//    return 0;
//}