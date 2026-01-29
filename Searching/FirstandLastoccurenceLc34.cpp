#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void firstOccurence(vector<int> &arr, int target, vector<int> &result)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int firstIndex = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            firstIndex = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    result.push_back(firstIndex);
}

void lastOccurence(vector<int> &arr, int target, vector<int> &result)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int lastIndex = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            lastIndex = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    result.push_back(lastIndex);
}

int main()
{
    vector<int> &nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result;
    firstOccurence(nums, target, result);
    lastOccurence(nums, target, result);

    if (!result.empty())
        cout << "resultkeelements";
    else
        cout << "-1 -1";

    return 0;
}