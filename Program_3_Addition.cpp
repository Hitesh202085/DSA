// C++ program for addition of two matrices
#include<iostream>
using namespace std;
const int N=3;

void add(int A[][N], int B[][N], int C[][N]) 
{ 
    int i, j; 

    for (i = 0; i < N; i++){ 

        for (j = 0; j < N; j++){ 

            C[i][j] = A[i][j] + B[i][j]; 
        }
    }
} 
 
int main() 
{ 

    int A[N][N] = { {8, 3, 0}, 

                    {1, 0, 2}, 

                    {3, 2, 5}}; 
 

    int B[N][N] = { {1, 2, 5}, 

                    {7, 3, 2}, 

                    {0, 1, 6}}; 
 

    int C[N][N]; 

    int i, j; 
    cout << "Matrix A is " << endl; 

    for (i = 0; i < N; i++){ 

        for (j = 0; j < N; j++) 

        cout << A[i][j] << " "; 

        cout << endl;
        
    } 
    cout << "Matrix B is " << endl; 

    for (i = 0; i < N; i++){ 

        for (j = 0; j < N; j++) 

        cout << B[i][j] << " "; 

        cout << endl;
        
    } 
    add(A, B, C); 
 
    cout << "Result matrix is " << endl; 

    for (i = 0; i < N; i++){ 

        for (j = 0; j < N; j++) 

        cout << C[i][j] << " "; 

        cout << endl;
        
    } 
 
    return 0; 
}