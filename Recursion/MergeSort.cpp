#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void merge(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    // find the length of left splitted array ,adding1 because while calulationg index we subtracted 1 , now to find size we are adding 1
    int length1 = mid - start + 1;
    int length2 = end - mid;

    // creating 2 new arrays
    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    // copy values from start -> mid in first array
    int k = start;
    for (int i = 0; i < length1; i++)
    {
        arr1[i] = arr[k++];
    }

    // copy values from mid+1 till the end in second array
    k = mid + 1; // or do K++
    for (int i = 0; i < length2; i++)
    {
        arr2[i] = arr[k++];
    }

    // after the values are copied merge two sorted array

    int i = 0;
    int j = 0;
    k = start;
    while (i < length1 && j < length2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while (i < length1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < length2)
    {
        arr[k++] = arr2[j++];
    }

    delete[] arr1;
    delete[] arr2;
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {2, 5, 1, 6, 7, 3, 10};
    int start = 0;
    int end = arr.size() - 1;
    mergeSort(arr, start, end);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}