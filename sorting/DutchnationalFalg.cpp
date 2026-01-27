//Sort 0s , 1s and 2s
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    // code here
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int mid = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int num : arr){
        cout<<num<<" ";
    }

    return 0;
}

   
        
    