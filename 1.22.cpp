#include<iostream>
using namespace std;
int main()
{
	const int n = 600;
	int a[n][n];
	int b[n];
	int result[n];
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
	for (int i = 0;i < n;i++)
	{
		result[i] = 0;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[j] += a[i][j] * b[i];
		}
	}
	
	return 0;
}