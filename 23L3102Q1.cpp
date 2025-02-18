///////Question 1 part 1/////
//#include<iostream>
//using namespace std;
//
//int** allocate_matrix() {
//    int** mat = new int*[2];
//    for (int i = 0; i < 2; i++)
//    {
//        mat[i] = new int[2];
//    }
//    return mat;
//}
//
//void input_matrix(int** mat)
//{
//    
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cin>>mat[i][j];
//        }
//    }
//}
//
//int** add(int** matA, int** matB) {
//    int** result = allocate_matrix();
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            result[i][j] = matA[i][j] + matB[i][j];
//        }
//    }
//    return result;
//}
//
//void matrix_sum(int** mat) {
//    
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cout << mat[i][j] << " ";
//        }cout << endl;
//    }
//}
//
//void delete_matrix(int** mat)
//{
//    for (int i = 0; i < 2; i++)
//    {
//        delete[] mat[i];
//    }delete[] mat;
//}
//
//int main() {
//    int** matA=allocate_matrix();
//    int** matB = allocate_matrix();
//
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matA);
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matB);
//
//    int** result = add(matA, matB);
//    cout << " matrix sum " << endl;
//
//    matrix_sum(result);
//    delete_matrix(matA);
//    delete_matrix(matB);
//    delete_matrix(result);
//
//    return 0;
//}


//
///////Question 1 part 2//////
//#include<iostream>
//using namespace std;
//
//int** allocate_matrix() {
//    int** mat = new int* [2];
//    for (int i = 0; i < 2; i++)
//    {
//        mat[i] = new int[2];
//    }
//    return mat;
//}
//
//void input_matrix(int** mat)
//{
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cin >> mat[i][j];
//        }
//    }
//}
//
//int** subtract(int** matA, int** matB) {
//    int** result = allocate_matrix();
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            result[i][j] = matA[i][j] - matB[i][j];
//        }
//    }
//    return result;
//}
//
//void matrix_subtraction(int** mat) {
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cout << mat[i][j] << " ";
//        }cout << endl;
//    }
//}
//
//void delete_matrix(int** mat)
//{
//    for (int i = 0; i < 2; i++)
//    {
//        delete[] mat[i];
//    }delete[] mat;
//}
//
//int main() {
//    int** matA = allocate_matrix();
//    int** matB = allocate_matrix();
//
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matA);
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matB);
//
//    int** result = subtract(matA, matB);
//    cout << " matrix subtraction " << endl;
//
//    matrix_subtraction(result);
//    delete_matrix(matA);
//    delete_matrix(matB);
//    delete_matrix(result);
//
//    return 0;
//}


///////Question 1 part 3//////
//#include<iostream>
//using namespace std;
//
//int** allocate_matrix() {
//    int** mat = new int* [2];
//    for (int i = 0; i < 2; i++)
//    {
//        mat[i] = new int[2];
//    }
//    return mat;
//}
//
//void input_matrix(int** mat)
//{
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cin >> mat[i][j];
//        }
//    }
//}
//
//int** multiply(int** matA, int** matB) {
//    int** result = allocate_matrix();
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            result[i][j] = matA[i][j] * matB[i][j];
//        }
//    }
//    return result;
//}
//
//void matrix_multiply(int** mat) {
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cout << mat[i][j] << " ";
//        }cout << endl;
//    }
//}
//
//void delete_matrix(int** mat)
//{
//    for (int i = 0; i < 2; i++)
//    {
//        delete[] mat[i];
//    }delete[] mat;
//}
//
//int main() {
//    int** matA = allocate_matrix();
//    int** matB = allocate_matrix();
//
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matA);
//    cout << " enter 4 elements only " << endl;
//    input_matrix(matB);
//
//    int** result = multiply(matA, matB);
//    cout << " matrix sum " << endl;
//
//    matrix_multiply(result);
//    delete_matrix(matA);
//    delete_matrix(matB);
//    delete_matrix(result);
//
//    return 0;
//}


////////Question 1 part 4//////
//#include<iostream>
//using namespace std;
//
//int** allocate_matrix() {
//    int** mat = new int* [2];
//    for (int i = 0; i < 2; i++)
//    {
//        mat[i] = new int[2];
//    }
//    return mat;
//}
//
//void input_matrix(int** mat)
//{
//
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cin >> mat[i][j];
//        }
//    }
//}
//
//int** transpose_matrix(int** mat) {
//    int** transposed = allocate_matrix();
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            transposed[j][i] = mat[i][j];
//        }
//    }
//    return transposed;
//}
//
//void print_matrix(int** mat) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            cout << mat[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void delete_matrix(int** mat)
//{
//    for (int i = 0; i < 2; i++)
//    {
//        delete[] mat[i];
//    }
//    delete[] mat;
//}
//
//int main() {
//    int** mat = allocate_matrix();
//    
//    cout << " enter 4 elements only " << endl;
//    input_matrix(mat);
//
//    cout << " original matrix is " << endl;
//    print_matrix(mat);
//
//    int** result = transpose_matrix(mat);
//    cout << " transpose matrix is " << endl;
//    print_matrix(result);
//
//    delete_matrix(mat);
//    delete_matrix(result);
//
//    return 0;
//}