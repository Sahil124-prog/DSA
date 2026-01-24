#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {11, 5, 7, 2, 3};
    int n = arr.size();
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int idx = -1;
    //     int minVal = arr[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < minVal)
    //         {
    //             minVal = arr[j];
    //             idx = j;
    //         }
    //     }
    //     swap(arr[i], arr[idx]);
    // }

    for(int i=0;i<n-1;i++){
        int idx = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[idx]){
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }

    for(int num : arr){
        cout<<num<<" ";
    }
    return 0;
}