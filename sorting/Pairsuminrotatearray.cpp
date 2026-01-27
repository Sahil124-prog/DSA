// User function Template for C++
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // code here
    vector<int>nums={7,9,1,3,5};
    int target = 6;
    int n = nums.size();
    int pivot = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            pivot = i;
        }
    }
    if (pivot == -1)
    {
        pivot = n - 1;
    }

    int left = (pivot + 1) % n;
    int right = (pivot) % n;
    int counter = 0;
    while (left != right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            return true;
        }

        else if (sum < target)
        {
            left = (left + 1) % n;
        }
        else
        {
            right = (right - 1 + n) % n;
        }
    }
    return false;

    return 0;
}


    
    
       
    
