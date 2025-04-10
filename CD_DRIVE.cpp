//#include <iostream>
//#include "CD_Drive.h"
//
//using namespace std;
//
//CD_Drive::CD_Drive() {
//    isInserted = false;
//    disc = nullptr;
//    cout << "CD_Drive ready" << endl;
//}
//
//void CD_Drive::insert(CompactDisc* d) {
//    disc = d;
//    isInserted = true;
//    cout << "CD inserted into drive" << endl;
//}
//
//void CD_Drive::eject() {
//    disc = nullptr;
//    isInserted = false;
//    cout << "CD ejected from drive" << endl;
//}
//
//void CD_Drive::play() {
//    if (isInserted && disc != nullptr)
//        disc->play();
//    else
//        cout << "No CD to play" << endl;
//}