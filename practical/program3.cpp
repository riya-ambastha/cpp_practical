#include <iostream>
#define MAX 10

using namespace std;

void matrixAddition(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixSubtraction(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void matrixMultiplication(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void matrixTranspose(int mat[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    int choice;

    cout << "Enter rows and columns for matrix 1: ";
    cin >> row1 >> col1;

    cout << "Enter matrix 1 elements:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter rows and columns for matrix 2: ";
    cin >> row2 >> col2;

    cout << "Enter matrix 2 elements:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "\nSelect an operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Transpose (only for first matrix)\n";
    cin >> choice;

    switch (choice) {
        case 1: // Addition
            if (row1 == row2 && col1 == col2) {
                matrixAddition(mat1, mat2, result, row1, col1);
                cout << "\nMatrix Addition Result:\n";
                displayMatrix(result, row1, col1);
            } else {
                cout << "Matrix addition not possible (dimension mismatch).\n";
            }
            break;

        case 2: // Subtraction
            if (row1 == row2 && col1 == col2) {
                matrixSubtraction(mat1, mat2, result, row1, col1);
                cout << "\nMatrix Subtraction Result:\n";
                displayMatrix(result, row1, col1);
            } else {
                cout << "Matrix subtraction not possible (dimension mismatch).\n";
            }
            break;

        case 3: // Multiplication
            if (col1 == row2) {
                matrixMultiplication(mat1, mat2, result, row1, col1, col2);
                cout << "\nMatrix Multiplication Result:\n";
                displayMatrix(result, row1, col2);
            } else {
                cout << "Matrix multiplication not possible (dimension mismatch).\n";
            }
            break;

        case 4: // Transpose of matrix 1
            matrixTranspose(mat1, result, row1, col1);
            cout << "\nTranspose of Matrix 1:\n";
            displayMatrix(result, col1, row1);  // Transposed matrix has reversed dimensions
            break;

        default:
            cout << "Invalid choice!\n";
            break;
    }
 

      // Displaying additional information
    cout << "Name - Riya Sinha" << endl;
    cout << "Roll - A45304823045" << endl;
    cout << "Class - BCA 3 A" << endl;

    return 0;
}
