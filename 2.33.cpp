#include<iostream>
using namespace std;
int main()
{
    int n = 50000;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    for (int m = n;m > 1;m /= 2)
    {
        for (int i = 0; i < m / 2; i++)
        {
            a[i] = a[i * 2] + a[i * 2 + 1];
        }
    }
    return 0;
}