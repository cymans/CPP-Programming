#include <iostream>

using namespace std;

//Global variable to store number of rows and columns
const int rows = 3; 
const int columns = 3;

//Function to input elements in the matrices
void getMatrixElements(int matrix[][columns]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrix[i][j];
		}
	}
}

int main() {
	//To input elements in A and B matrices from user
	int matrixA[rows][columns] = {};
	cout << "*Enter A array elements*" << "\n" << "\n";
	getMatrixElements(matrixA);

	int matrixB[rows][columns] = {};
	cout << "\n*Enter B array elements*" << "\n" << "\n";
	getMatrixElements(matrixB);

	int matrixC[rows][columns] = {};

	//Adding A and B Matrices and store result in C matrix
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}
	//Multiplying elements by 3 in C matrix
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrixC[i][j] *= 3;
		}
	}
	//Display resultant from matrix C
	cout << "\nResult after adding A and B elements, and multiply by 3: " << "\n" << "\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrixC[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}