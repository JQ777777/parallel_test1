﻿#include <iostream>
using namespace std;
int main() {
    int n = 50000;
    int sum1 = 0, sum2 = 0, sum = 0;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    for (int i = 0;i < n; i += 2)
    {
        sum1 += a[i];
        sum2 += a[i + 1];

    }
    sum = sum1 + sum2;
    return 0;
}
