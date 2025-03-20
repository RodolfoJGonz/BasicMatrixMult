#include <iostream>

void printMatrix(int** M, int size);


int main (int argc, char *argv[]) {
	
	// MATRIX_SIZE x MATRIX_SIZE matrices
	const int MATRIX_SIZE = 2;


	// Allocate space for the matrices
	int** A = new int*[MATRIX_SIZE];
	int** B = new int*[MATRIX_SIZE];
	int** F = new int*[MATRIX_SIZE];
	for (int i =0; i < MATRIX_SIZE; i++){
		A[i] = new int[MATRIX_SIZE];
		B[i] = new int[MATRIX_SIZE];
		F[i] = new int[MATRIX_SIZE];
	}

	//Giving Matrices Values
	for(int row = 0; row < MATRIX_SIZE; row++){
		for(int col = 0; col < MATRIX_SIZE; col++){
			A[row][col] = rand()%10 + 1;
			B[row][col] = rand()%10 + 1;
		}
	}

	printMatrix(A, MATRIX_SIZE);
	printMatrix(B, MATRIX_SIZE);


	//Multiplication
	//solution is at the botton, try to implement tomorrow
	//without looking at solution
	
	printMatrix(F, MATRIX_SIZE);


	// De-Allocate the matrix memory
	for (int i =0; i < MATRIX_SIZE; i++){
		delete[] A[i];
		delete[] B[i];
		delete[] F[i];
	}
	delete[] A;
	delete[] B;
	delete[] F;

	return 0;
}


void printMatrix(int** M, int size){
	std::cout << "---------" << std::endl;
	for(int row = 0; row < size; row++){
		for(int col = 0; col < size; col++){
			std::cout << M[row][col] << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "---------" << std::endl;
}

//solution to matrix mult
//
	//for(int i = 0; i < MATRIX_SIZE; i++){
	//	for(int j = 0; j < MATRIX_SIZE; j++){
	//		for(int k = 0; k < MATRIX_SIZE; k++){
	//			F[i][j] += A[i][k] * B[k][j];
	//		}
	//	}
	//}
