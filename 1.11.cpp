#include<iostream>
using namespace std;
int main()
{
	const int n = 600;
	int a[n][n];
	int b[n];
	int r[n];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = i + j;
		}
	}
	for (int i = 0;i < n;i++)
	{
		b[i] = i;
	}

	for (int i = 0; i < n; i++)
	{
		r[i] = 0;
		for (int j = 0; j < n; j++)
		{
			r[i] += a[j][i] * b[j];
		}
	}

	return 0;
}