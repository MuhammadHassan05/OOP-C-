//#include <iostream>
//using namespace std;
//
//class Matrix {
//private:
//    int** mat;
//    int rows, cols;
//
//    void allocate() {
//        mat = new int* [rows];
//        for (int i = 0; i < rows; ++i)
//            mat[i] = new int[cols];
//    }
//
//    void deallocate() {
//        for (int i = 0; i < rows; ++i)
//            delete[] mat[i];
//        delete[] mat;
//    }
//
//public:
//    // Default constructor
//    Matrix() : rows(0), cols(0), mat(nullptr) {}
//
//    // Parameterized constructor
//    Matrix(int r, int c) : rows(r), cols(c) {
//        allocate();
//    }
//
//    // Copy constructor (deep copy)
//    Matrix(const Matrix& other) {
//        rows = other.rows;
//        cols = other.cols;
//        allocate();
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < cols; ++j)
//                mat[i][j] = other.mat[i][j];
//    }
//
//    // Destructor
//    ~Matrix() {
//        if (mat)
//            deallocate();
//    }
//
//    // Input operator
//    friend istream& operator>>(istream& in, Matrix& m) {
//        cout << "Enter elements of " << m.rows << "x" << m.cols << " matrix:\n";
//        for (int i = 0; i < m.rows; ++i)
//            for (int j = 0; j < m.cols; ++j)
//                in >> m.mat[i][j];
//        return in;
//    }
//
//    // Output operator
//    friend ostream& operator<<(ostream& out, const Matrix& m) {
//        for (int i = 0; i < m.rows; ++i) {
//            for (int j = 0; j < m.cols; ++j)
//                out << m.mat[i][j] << " ";
//            out << endl;
//        }
//        return out;
//    }
//
//    // Addition
//    Matrix operator+(const Matrix& m) {
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < cols; ++j)
//                result.mat[i][j] = mat[i][j] + m.mat[i][j];
//        return result;
//    }
//
//    // Subtraction
//    Matrix operator-(const Matrix& m) {
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < cols; ++j)
//                result.mat[i][j] = mat[i][j] - m.mat[i][j];
//        return result;
//    }
//
//    // Multiplication
//    Matrix operator*(const Matrix& m) {
//        Matrix result(rows, m.cols);
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < m.cols; ++j) {
//                result.mat[i][j] = 0;
//                for (int k = 0; k < cols; ++k)
//                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
//            }
//        return result;
//    }
//
//    // += Operator
//    Matrix& operator+=(const Matrix& m) {
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < cols; ++j)
//                mat[i][j] += m.mat[i][j];
//        return *this;
//    }
//
//    // [] operator (row)
//    int* operator[](int r) {
//        return mat[r];
//    }
//
//    // () operator: returns transpose as a new matrix
//    Matrix operator()() {
//        Matrix result(cols, rows);
//        for (int i = 0; i < rows; ++i)
//            for (int j = 0; j < cols; ++j)
//                result.mat[j][i] = mat[i][j];
//        return result;
//    }
//
//    // swap two rows
//    void swapRows(int r1, int r2) {
//        for (int i = 0; i < cols; ++i)
//            std::swap(mat[r1][i], mat[r2][i]);
//    }
//
//    // Transpose
//    void transpose() {
//        *this = this->operator()();
//    }
//
//    void display() {
//        cout << *this;
//    }
//};
//
//int main() {
//    Matrix A(2, 2), B(2, 2);
//    cin >> A >> B;
//
//    cout << "\nMatrix A:\n" << A;
//    cout << "Matrix B:\n" << B;
//
//    Matrix C = A + B;
//    cout << "A + B:\n" << C;
//
//    Matrix D = A * B;
//    cout << "A * B:\n" << D;
//
//    Matrix E = A();
//    cout << "Transpose of A:\n" << E;
//
//    A.swapRows(0, 1);
//    cout << "Matrix A after swapping rows 0 and 1:\n" << A;
//
//    return 0;
//}
