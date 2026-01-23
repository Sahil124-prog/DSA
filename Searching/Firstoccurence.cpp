#include <iostream>
#include <vector>
using namespace std;

int  binarySearch(vector<int> &arr, int key)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            while(arr[mid-1]==key){
                mid--;
            }
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {2, 4, 5, 7, 15,15,15 ,15, 20};
    int key = 15;

   cout<<binarySearch(arr,key);
}