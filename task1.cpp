//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual char* speak() {
//        char* string = new char[16] {'s', 'p', 'e', 'a', 'k', '(', ')', 'c', 'a', 'l', 'l', 'e', 'd'};
//        return string;
//    }
//    virtual ~Animal() { cout << "~Animal() called." << endl; }
//};
//
//class Dog : public Animal {
//public:
//    char* speak() override {
//        char* string = new char[6] {'w', 'o', 'o', 'f', '!'};
//        return string;
//    }
//    ~Dog() { cout << "~Dog() called." << endl; }
//};
//
//class Cat : public Animal {
//public:
//    char* speak() override {
//        char* string = new char[6] {'m', 'e', 'o', 'w', '!'};
//        return string;
//    }
//    ~Cat() { cout << "~Cat() called." << endl; }
//};
//
//class Sheep : public Animal {
//public:
//    char* speak() override {
//        char* string = new char[6] {'b', 'l', 'e', 'e', 't'};
//        return string;
//    }
//    ~Sheep() { cout << "~Sheep() called." << endl; }
//};
//
//class Cow : public Animal {
//public:
//    char* speak() override {
//        char* string = new char[4] {'m', 'o', 'o'};
//        return string;
//    }
//    ~Cow() { cout << "~Cow() called." << endl; }
//};
//
//class Horse : public Animal {
//public:
//    char* speak() override {
//        char* string = new char[6] {'n', 'e', 'i', 'g', 'h'};
//        return string;
//    }
//    ~Horse() { cout << "~Horse() called." << endl; }
//};
//
//int main() {
//    const int size = 5;
//    Animal* myPets[size];
//    int i = 0;
//
//    while (i < size) {
//        cout << "Press 1 for a Dog, 2 for a Cat, 3 for a Sheep, 4 for a Cow, and 5 for a Horse." << endl;
//        int choice;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            myPets[i] = new Dog;
//            cout << "Dog added at position " << i << endl << endl;
//            i++;
//            break;
//        case 2:
//            myPets[i] = new Cat;
//            cout << "Cat added at position " << i << endl << endl;
//            i++;
//            break;
//        case 3:
//            myPets[i] = new Sheep;
//            cout << "Sheep added at position " << i << endl << endl;
//            i++;
//            break;
//        case 4:
//            myPets[i] = new Cow;
//            cout << "Cow added at position " << i << endl << endl;
//            i++;
//            break;
//        case 5:
//            myPets[i] = new Horse;
//            cout << "Horse added at position " << i << endl << endl;
//            i++;
//            break;
//        default:
//            cout << "Invalid input. Enter again." << endl << endl;
//            break;
//        }
//    }
//
//    for (int j = 0; j < size; j++) {
//        cout << myPets[j]->speak() << endl;
//        delete myPets[j];
//    }
//    return 0;
//}