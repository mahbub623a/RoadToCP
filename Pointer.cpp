/*
    Mahbubur Rahman
    ID:011221441
    United International University
*/
#include <bits/stdc++.h>
using namespace std;
#define Hacked return 0

void increment(int *a)
{
    (*a)++;
}

int main()
{
    // int x = 5;
    // int *p = &x;

    // cout << "x:" << x << endl;
    // cout << "&x:" << &x << endl;
    // cout << "p:" << p << endl;
    // cout << "*p:" << *p << endl;

    // int **pp = &p;
    // cout << "&p:" << &p << endl;
    // cout << "pp:" << pp << endl;
    // cout << "**p:" << **pp << endl;

    // int ***ppp = &pp;
    // cout << "&pp:" << &pp << endl;
    // cout << "ppp:" << ppp << endl;
    // cout << "***ppp:" << ***ppp << endl;


    // int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << (*arr + i) << " ";
    // }

    int a = 5;
    cout << "a:" << a << endl;
    increment(&a);
    cout << "a:" << a;

    Hacked;
}