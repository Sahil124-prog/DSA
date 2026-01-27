
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to find common elements in three arrays.
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                           vector<int> &arr3)
{
    // Code Here
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> result;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    if (!result.empty())
    {
        return result;
    }
    else
    {
        return {-1};
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);





    return 0;
}

    
