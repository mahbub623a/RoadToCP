#include <bits/stdc++.h>
using namespace std;

#define print(x)              \
    for (auto value : x)      \
        cout << value << " "; \
    cout << endl;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Merge sort
const int N = 1e5 + 10;
int arr[N];

void merge(int left, int right, int mid)
{
    int leftArrSize = mid - left + 1;
    int rightArrSize = right - mid; // (right - (mid + 1) + 1)

    int leftArr[leftArrSize + 1];
    int rightArr[rightArrSize + 1];

    // inserting value in two different array
    for (int i = 0; i < leftArrSize; i++)
        leftArr[i] = arr[i + left];

    for (int i = 0; i < rightArrSize; i++)
        rightArr[i] = arr[mid + 1 + i];

    leftArr[leftArrSize] = rightArr[rightArrSize] = INT_MAX;

    int leftIndex = 0,
        rightIndex = 0;
    for (int i = left; i <= right; i++)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[i] = leftArr[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[i] = rightArr[rightIndex];
            rightIndex++;
        }
    }
}

void mergeSort(int left, int right)
{
    int mid = (left + right) / 2;

    if (left == right)
        return;

    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, right, mid);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selectionSort(arr, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}