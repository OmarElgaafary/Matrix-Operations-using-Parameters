#include <iostream>

void matrixAdd(int m1[3][3], int m2[3][3]);
void matrixSub(int m1[3][3], int m2[3][3]);
void matrixMul(int m1[3][3], int m2[3][3]);
void funcprint(int array[3][3]);


int main() {

	int m1[3][3] = { {1,1,1}, {3,3,3}, {9,9,9} };
	int m2[3][3] = { {1,1,1}, {3,3,3}, {9,9,9} };

	matrixMul(m1, m2);
}

void funcprint(int array[3][3]) {

	for (int i = 0; i < 3; i++) {
		std::cout << "[";

		for (int j = 0; j < 3; j++) {
			std::cout << array[i][j];
			if (j <= 1) {
				std::cout << ", ";
			}
		}
		std::cout << "]";
		std::cout << std::endl;
	}
}

void matrixAdd(int m1[3][3], int m2[3][3]) {

	int addition[3][3];

	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 3; j++) {
			addition[i][j] = m1[i][j] + m2[i][j];
		}
	}


	funcprint(addition);
}

void matrixSub(int m1[3][3], int m2[3][3]) {

	int subtraction[3][3];

	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 3; j++) {
			subtraction[i][j] = m1[i][j] - m2[i][j];
		}
	}


	funcprint(subtraction);
}

void matrixMul(int m1[3][3], int m2[3][3]) {

	int multiplication[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0 ,0} };

	for (int i = 0; i < 3; i++) { // i = rows
		for (int j = 0; j < 3; j++) { // j = col
			for (int x = 0; x < 3; x++) { // x = index of current row / col
				multiplication[i][j] = multiplication[i][j] + m1[i][x] * m2[x][j]; // m1 rows multiplied by m2 cols
			}
		}

	}


	funcprint(multiplication);
	}
	