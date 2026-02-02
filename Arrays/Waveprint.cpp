#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[4][4] = { {1, 7, 14, 6},
                      {11, 15, 5, 10},
                      {2, 4, 16, 3},
                      {9,13,8,12} 
                    };
    
    //this is according to column wise 
    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<4;i++){
                cout<<arr[i][j]<<" ";
            }
            // cout<<"\n";
        }
        else{
            for(int i=3;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            // cout<<"\n";
        }
    }

cout<<"\n";

    //this is according to row wise 
    for(int i=0;i<4;i++){
        if(i%2!=0){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            // cout<<"\n";
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            // cout<<"\n";
        }
    }




    return 0;
}