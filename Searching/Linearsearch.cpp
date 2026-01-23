#include<iostream>
#include<vector>
using namespace std;

//return the index of the key if it is found and value of key >5 , then return the double value of key otherwise return the half of the key

int LinearSearch(vector<int>&arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return  i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={3,1,6,4,2};
    int key = 4;
    int idx = LinearSearch(arr,key);
    (key>5)?cout<<idx<<" "<<key*2 : cout<<idx<<" "<<key/2;
}

