#include<iostream>

using namespace std;

void powerIteration(float** matrix,float* eigenvector,float* newEigenvector, int order ) {
	int eigenvalue = 1;
	float coor;
	for (int i = 1;i <= order;i++)
	{
		coor = 0.0;
		for (int j = 1;j <= order; j++)
		{
			coor = coor + matrix[i][j] * eigenvector[j];
		}
		newEigenvector[i] = coor;
	}
	for (int i = 1;i <= order; i++)
	{
		eigenvector[i] = newEigenvector[i];
	}
	float newEigenvalue = fabs(eigenvector[1]);
	for (int i = 2;i <= order;i++)
	{
		if (fabs(eigenvector[i]) > newEigenvalue)
		{
			newEigenvalue = fabs(eigenvector[i]);
		}
	}
	for (int i = 1;i <= order;i++)
	{
		eigenvector[i] = eigenvector[i] / newEigenvalue;
	}

}

int main(){
	int order;
	cout << "Enter Order of Matrix: ";
	cin >> order;
	float** matrix = new float* [order];
	float* eigenvector = new float[order];
	float* newEigenvector = new float[order];
	cout << "Enter Coefficient of Matrix: " << endl;
	for (int i = 0; i <= order; i++)
	{
		matrix[i] = new float[order];
	}
	for (int i = 1;i <= order;i++)
	{
		for (int j = 1;j <= order;j++)
		{
			cout << "matrix[" << i << "]" << "[" << j << "]= ";
			cin >> matrix[i][j];
		}
	}

	cout << "Enter Initial Guess Vector: " << endl;
	for (int i = 1;i <= order;i++)
	{
		cout << "eigenvector[" << i << "]= ";
		cin >> eigenvector[i];
	}
	for (int i = 0; i < 10; i++)
	{
		powerIteration(matrix, eigenvector, newEigenvector, order);
	}
	
	cout << "Eigen Vector: " << endl;
	for (int i = 1;i <= order;i++)
	{
		cout << eigenvector[i] <<"\t";
	}

	return 0;
}