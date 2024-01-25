#include <bits/stdc++.h>
using namespace std;
int f(int k, int c, int *arr)
{
    if (k == 0)
        return (c % (*arr) == 0);
    int a = f(k - 1, c, arr);
    int b = 0;
    if (*(arr + k) <= c)
        b = f(k, c - *(arr + k), arr);
    return a + b;
}
int main()
{
    int arr[] = {1, 2, 5};
    cout << f(1, 2, arr);
}