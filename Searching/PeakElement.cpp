#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int>arr={1,2,3,4};
    int n = arr.size();
    if (n == 1)
        return 0;

    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // handle boundaries safely
        bool leftOK = (mid == 0) || arr[mid] > arr[mid - 1];
        bool rightOK = (mid == n - 1) || arr[mid] > arr[mid + 1];

        if (leftOK && rightOK)
            return mid;

        else if (mid < n - 1 && arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0;
}
    
        