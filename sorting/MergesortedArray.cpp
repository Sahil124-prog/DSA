#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {3, 5, 6};
    int m = 3;
    int n = 3;
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;
    while (i >= 0 && j >= 0)
    {
        if (i >= 0 && nums1[i] >= nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }

    while (i >= 0)
    {
        nums1[k--] = nums1[i--];
    }

    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }

    for (int num : nums1)
    {
        cout << num << " ";
    }
}