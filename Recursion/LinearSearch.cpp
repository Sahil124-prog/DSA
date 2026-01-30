#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool linearSearch(vector<int>&arr,int idx,int key){
    if(idx==arr.size()-1) return false;
    if(arr[idx]==key) return true;
    linearSearch(arr,idx+1,key);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int key = 8;
    vector<int>arr={3,5,2,1,9,8,7};
    cout<<linearSearch(arr,0,key);
    return 0;
}