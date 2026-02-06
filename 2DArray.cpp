// In c++ language
#include<iostream>
using namespace std;
int main(){
    int A[3][3]={{4,6,8}, {6,2,5}, {1,8,7}};
    int* B[3];
    B[0] = new int[3];
    B[1] = new int[3];
    B[2] = new int[3];

    int **C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j];
        }
    }
    delete[] C;
    return 0;
}


// // using c language
// #include<iostream>
// #include<stdio.h>
// int main(){
//     int A[3][4]={{2,5,4,5}, {4,5,7,8}, {8,2,8,7}};
//     int *B[3];
//     int **C;
//     int i,j;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//             printf("%d ",A[i][j]);
//             printf("\n");
//     }
//     B[0] = (int *)malloc(4*sizeof(int));
//     B[1] = (int *)malloc(4*sizeof(int));
//     B[2] = (int *)malloc(4*sizeof(int));
    
//     C=(int **)malloc(3*sizeof(int *));
//     C[0]=(int *)malloc(4*sizeof(int));
//     C[1]=(int *)malloc(4*sizeof(int));
//     C[2]=(int *)malloc(4*sizeof(int));

//     return 0;
// }

// // By chatgpt
// #include <iostream>
// using namespace std;

// int main() {
//     // Static 2D array
//     int A[3][4] = { {2,5,4,5}, {4,5,7,8}, {8,2,8,7} };

//     // Print A
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << A[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Array of pointers to int (like your B[3])
//     int* B[3];
//     B[0] = new int[4];
//     B[1] = new int[4];
//     B[2] = new int[4];

//     // Double pointer (like your C)
//     int** C = new int*[3];
//     C[0] = new int[4];
//     C[1] = new int[4];
//     C[2] = new int[4];

//     // Example: fill B and C with values
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             B[i][j] = A[i][j];   // copy from A
//             C[i][j] = A[i][j];   // copy from A
//         }
//     }

//     // Print C
//     cout << "Matrix C:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Free memory
//     delete[] B[0];
//     delete[] B[1];
//     delete[] B[2];

//     for (int i = 0; i < 3; i++) {
//         delete[] C[i];
//     }
//     delete[] C;

//     return 0;
// }