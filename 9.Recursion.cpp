
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 1;
    else
    {
        int jane = fib(n - 1);
        int result = n * jane;
        return result;
    }
}

int sumArray(int arr[], int n)
{
    if (n == 0)
        return arr[0];
    else
    {
        int jane = sumArray(arr, n - 1);
        int result = jane + arr[n];
        return result;
    }
}

int digitSum(int n)
{
    if (n == 0)
        return 0;
    else
    {
        int mine = n % 10;
        int jane = digitSum(n / 10);
        return mine + jane;
    }
}

int main()
{
    int n = 6;
    cout << fib(n) << endl;

    int arr[] = {1, 2, 3, 4, 5, 15};
    cout << sumArray(arr, n - 1) << endl;

    cout << digitSum(12345) << endl;
    return 0;
}