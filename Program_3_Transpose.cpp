// C++ Program to find transpose of a matrix
#include <iostream> 
using namespace std; 
const int N=3;

void transpose(int A[][N], int B[][N]){

    int i, j;

    for (i = 0; i < N; i++){

        for (j = 0; j < N; j++){

            B[i][j] = A[j][i];
        }
    }
}

int main()
{

    int A[N][N] = { {1, 4, 8},
                    {0, 7, 2},
                    {3, 2, 4}};
 

    int B[N][N], i, j;

    cout <<"Main matrix is \n";
    for (i = 0; i < N; i++){

        for (j = 0; j < N; j++)

           cout <<" "<< A[i][j];

        cout <<"\n";

    }
 
    transpose(A, B);
 
    cout <<"Result matrix is \n";

    for (i = 0; i < N; i++){

        for (j = 0; j < N; j++)

           cout <<" "<< B[i][j];

        cout <<"\n";

    }
 
    return 0;
}