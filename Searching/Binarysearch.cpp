#include <iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>&arr,int key){
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
           return true;
        }
        else if (arr[mid]<key)
        {
            left = mid+1;
        }
        else if ( arr[mid]>key)
        {
            right = mid-1;
        }
    }
    return false;
}
int main(){
    vector<int>arr={2,4,5,7,8,10,12,15,20};
    int key = 15;

    if(binarySearch(arr,key)){
        cout<<"Found the key";
    }
    else{
        cout<<"Didn't founded the key";
    }
    return 0;
}