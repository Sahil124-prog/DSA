#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {11, 5, 7, 2, 3};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // shifting the elements forward
            j--;
        }
        arr[j + 1] = key;
    }

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}