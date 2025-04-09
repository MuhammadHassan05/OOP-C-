//#define _CRT_SECURE_NO_WARNINGS  
//#include "Style.h"
//#include <cstring>
//
//Style::Style(const char col[], bool fill) {
//    if (col != nullptr) {
//        if (strlen(col) < 10)
//            strcpy(color, col);
//        else {
//            for (int i = 0; i < 9; i++)
//                color[i] = col[i];
//            color[9] = '\0';
//        }
//    }
//    else {
//        color[0] = '\0';
//    }
//
//    isFilled = fill;
//    cout << "Style() called" << endl;
//}
//
//void Style::SetColor(const char col[]) {
//    if (col != nullptr) {
//        if (strlen(col) < 10)
//            strcpy(color, col);
//        else {
//            for (int i = 0; i < 9; i++)
//                color[i] = col[i];
//            color[9] = '\0';
//        }
//    }
//}
//
//void Style::SetFilled(bool f) {
//    isFilled = f;
//}
//
//void Style::print() const {
//    cout << "Color: " << color << ", Filled: " << (isFilled ? "Yes" : "No") << endl;
//}
//
//Style::~Style() {
//    cout << "~Style() called" << endl;
//}
