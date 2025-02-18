//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//
//using namespace std;
//
//char** parseFEN(const string& FEN) {
//    char** board = new char* [8];
//    for (int i = 0; i < 8; i++) {
//        *(board + i) = new char[8];
//    }
//    const char* p = FEN.c_str();
//    for (int row = 0; row < 8; row++) {
//        char* colPtr = *(board + row);
//        while (*p != '\0' && *p != ' ' && *p != '/') {
//            if (*p >= '1' && *p <= '8') {
//                int emptyCount = *p - '0';
//                for (int j = 0; j < emptyCount; j++) {
//                    *colPtr = '.';
//                    colPtr++;
//                }
//            }
//            else {
//                *colPtr = *p;
//                colPtr++;
//            }
//            p++;
//        }
//        if (*p == '/')
//            p++;
//    }
//    return board;
//}
//
//void printBoard(char** board) {
//    for (int i = 0; i < 8; i++) {
//        char* rowPtr = *(board + i);
//        for (int j = 0; j < 8; j++) {
//            cout << *(rowPtr + j) << " ";
//        }
//        cout << "\n";
//    }
//}
//
//void freeBoard(char** board) {
//    for (int i = 0; i < 8; i++) {
//        delete[] * (board + i);
//    }
//    delete[] board;
//}
//
//void playGameFromFile(const string& filename) {
//    ifstream file(filename);
//    if (!file) {
//        cerr << "Error opening file " << filename << endl;
//        exit(EXIT_FAILURE);
//    }
//    string fenLine;
//    while (getline(file, fenLine)) {
//        if (fenLine.empty())
//            continue;
//        char** board = parseFEN(fenLine);
//        printBoard(board);
//        freeBoard(board);
//        system("pause");
//        system("cls");
//    }
//    file.close();
//}
//
//int main() {
//    playGameFromFile("fen.txt");
//    return 0;
//}