#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr,int idx){
    if(idx==arr.size()-1) return true;
    if(arr[idx]>arr[idx+1]) return false;
    isSorted(arr,idx+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int arr[5]={3,5,7,9,11};
    vector<int>arr={3,5,7,9,11};
    
    cout<<isSorted(arr,0);
    return 0;
}