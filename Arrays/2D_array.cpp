#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // int arr[3][4];

    //taking input row wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //taking input column wise
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //sum of rows only
    int maxSum =0;
    int idx =0;
    for(int i=0;i<3;i++){
        int sum =0;
        
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            idx=i;
        }
        cout<<sum<<"\n";
    }
    cout<<"Maximum sum -> index on "<<idx<<" ";

    int maxCol=0;
    int idx1 = 0;
    for(int i=0;i<4;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<"\n";
        if(sum>maxCol){
            maxCol=sum;
            idx1=i;
        }
        
    }
    cout << idx1 << " ";

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}