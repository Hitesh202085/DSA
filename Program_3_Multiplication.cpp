// C++ program for multiplication of two matrices
#include<iostream>
using namespace std;
 
const int R1=3;
const int C1=3;
const int R2=3;
const int C2=3;
 
void mulMat(int mat1[][C1], int mat2[][C2]) {

    int rslt[R1][C2];
 
    cout << "Multiplication of given two matrices is:\n" << endl;
 
    for (int i = 0; i < R1; i++) {

        for (int j = 0; j < C2; j++) {

            rslt[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {

                rslt[i][j] += mat1[i][k] * mat2[k][j];

            }
 
            cout << rslt[i][j] << "\t";

        }
        cout<<endl;
    }
}
 
int main(){

    int mat1[R1][C1] = {

            {1, 4, 3},

            {2, 3, 0},

            {8, 2, 6}};
 

    int mat2[R2][C2] = {

            {4, 1, 3},

            {2, 6, 5},

            {3, 6, 2}};


    cout << "Matrix 1 is:\n" << endl;
 
    for (int i = 0; i < R1; i++) {

        for (int j = 0; j < C2; j++) {

            cout << mat1[i][j] << "\t";

        }
        cout<<endl;
    }
    
    cout << "Matrix 2 is:\n" << endl;
 
    for (int i = 0; i < R1; i++) {

        for (int j = 0; j < C2; j++) {

            cout << mat2[i][j] << "\t";

        }
        cout<<endl;
    }
    mulMat(mat1, mat2);
 
    return 0;
}