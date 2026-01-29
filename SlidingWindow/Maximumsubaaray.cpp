//kadane algo


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums={1,3,5,6,};
    int currSum = 0;
    int maxSum = nums[0];
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }


    return 0;
}

        
        