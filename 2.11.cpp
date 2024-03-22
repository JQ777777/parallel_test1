#include<iostream>
using namespace std;
int main()
{
	int n = 500;
	int* a = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return 0;
}