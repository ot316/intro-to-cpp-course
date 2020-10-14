#include<iostream>

using namespace std;
const int N = 4;
const int R = 4;
const int M = 4;


void input_matrix_column_N(int matrix[][N], int X);
void display_matrix_column_N(int matrix[][N], int X);
void input_matrix_column_R(int matrix[][N], int X);
void display_matrix_column_R(int matrix[][N], int X);
void multiply_matrices(int matrix1[][N], int matrix2[][R], int output[][R], int X);
int values_for_x_and_y(int i, int j, int matrix1[][N], int matrix2[][R]);

int main ()
{
	int matrix1[M][N];
	int matrix2[N][R];
	int output[M][R];
	cout << "\nINPUT FIRST (" << M << " x " << N << ") MATRIX:\n";
	input_matrix_column_N(matrix1,M);
	cout << "\nYou entered:\n";
	display_matrix_column_N(matrix1, M);
	cout << "\nINPUT SECOND (" << M << " x " << R << ") MATRIX:\n";
	input_matrix_column_R(matrix2,M);
	cout << "\nYou entered:\n";
	display_matrix_column_R(matrix2, M);
	multiply_matrices(matrix1, matrix2, output, M);
	cout << "\nThe first matrix multiplied by the second matrix is:\n";
	display_matrix_column_R(output, M);
}

void multiply_matrices(int matrix1[][N], int matrix2[][R], int output[][R], int X)
{
	for (int j = 0; j < X; j++)
	{
		for (int i = 0; i < N; i++)
		{
			output[i][j] = values_for_x_and_y(i, j, matrix1, matrix2);
		}
	}
}

int values_for_x_and_y(int i, int j, int matrix1[][N], int matrix2[][R])
{
	int total = 0;
	for (int count = 0; count < N; count++)
	{
		total += matrix1[i][count] * matrix2[count][j];
	}
	return total;
}

void input_matrix_column_N(int matrix[][N], int X)
{
	for (int i = 0; i < N; i++)
	{
		cout << "Type in " << X << " values for row " << i + 1 <<  " separated by spaces: ";
		for (int j = 0; j < X; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void input_matrix_column_R(int matrix[][R], int X)
{
	for (int i = 0; i < R; i++)
	{
		cout << "Type in " << X << " values for row " << i + 1 <<  " separated by spaces: ";
		for (int j = 0; j < X; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void display_matrix_column_N(int matrix[][N], int X)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < X; j++)
		{
			cout << matrix[i][j];
			cout << " ";
		}
		cout << endl;
	}
}

void display_matrix_column_R(int matrix[][R], int X)
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < X; j++)
		{
			cout << matrix[i][j];
			cout << " ";
		}
		cout << endl;
	}
}
