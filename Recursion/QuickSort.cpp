#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int start,int end){
    //find pivot(first element)
    int pivot = arr[start];

    //counting how many elements are less than pivot
    int count = 0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot) count++;
    }
    //after counting we get to know about the  right place of pivot , now we will create a pivot index at that position
    
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);

    //now we will handle the right and left part in which all the elements should be less and greater respectively

    int i = start, j= end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        swap(arr[i],arr[j]);
    }
    return pivotIndex;
}
void quicksort(vector<int>&arr,int start,int end){
    if(start>=end) return;
    //find the pivotindex for the current pivot element always the pivot element is at the start of the arr...
    
    int p = partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>arr={4,5,2,1,7,3,8};
    int n = arr.size();
    quicksort(arr,0,n);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}