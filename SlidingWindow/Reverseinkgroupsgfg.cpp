#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr = {
        1,
        3,
        5,
        6,
    };
    int k = 3;
    int n = arr.size();

    if (k >= n)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = min(i + k, n);
        reverse(arr.begin() + start, arr.begin() + end);
    }

    return 0;
}