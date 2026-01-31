#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPresent(int arr[][4],int key,int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;i<4;j++){
            if(arr[i][j]==key) return true;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[4][4]={{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
    int key = 9;

    if(isPresent(arr,key,4)){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }

    return 0;
}