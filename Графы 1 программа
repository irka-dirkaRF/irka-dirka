#include <iostream>
#include <limits.h>
using namespace std;
 
void OutputArray(int **a, int n)
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
 
int ** InitArray(int n)
{
	int **a = new int*[n];
	for (int i=0; i<n; i++)
	{
		a[i] = new int[n];
		for (int j=0; j<n; j++)
			a[i][j] = 0;
	}
	return a;
}
 
int main() {
	int n;
	cin >> n;
	int a[n][2];
	int max = INT_MIN;
	for (int i=0; i<n; i++)
	{
		cin >> a[i][0] >> a[i][1];
		if (max < a[i][0]) max = a[i][0];
		if (max < a[i][1]) max = a[i][1];
	}
	int m = max + 1;
	int **v = InitArray(m); // Матрица смежности
	int **k = InitArray(m); // Матрица инцидентности
 
	for (int i=0; i<n; i++)
	{
		v[ a[i][0] ][ a[i][1] ] = 1;
		v[ a[i][1] ][ a[i][0] ] = 1;
 
		k[ a[i][0] ][ a[i][1] ] = 1;
		if (k[ a[i][1] ][ a[i][0] ] != 1)
			k[ a[i][1] ][ a[i][0] ] = -1;
	}
	cout << "Матрица смежности" << endl;
	OutputArray(v, m);
	cout << "Матрица инцидентности" << endl;
	OutputArray(k, m);
 
	return 0;
}
