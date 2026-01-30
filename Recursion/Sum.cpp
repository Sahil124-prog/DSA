#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Sum(vector<int>&arr,int idx){
    if(idx==arr.size()) return 0;
    return arr[idx]+Sum(arr,idx+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>arr={1,2,3,4,5,6};
    cout<<Sum(arr,0);
    return 0;
}