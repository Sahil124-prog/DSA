#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool BSearch(vector<int>&arr,int left , int right,int key){
    if(left>right) return false;
    int mid = left+(right-left)/2;
    if(arr[mid]==key) return true;
    else if(arr[mid]<key) BSearch(arr,mid+1,right,key);
    else BSearch(arr,left,mid-1,key);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>arr={3,5,2,1,9,8,7};
    int key=8;
    int left = 0;
    int right  = arr.size()-1;
    cout<<BSearch(arr,left,right,key);




    return 0;
}