#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void SpiralPrintAntiClockwise(int arr[][4]){
    int tr = 0 , br = 3 ,lc =0 , rc =3;
    while(lc<rc && tr<br){
    for(int j=rc;j>=lc;j--){
        cout<<arr[tr][j]<<" ";
    }
    tr++;

    for(int i=tr;i<=br;i++){
        cout<<arr[i][lc]<<" ";
    }
    lc++;

    for(int j = lc;j<=rc;j++){
        cout<<arr[br][j]<<" ";
    }
    br--;

    for(int i=br;i>=tr;i--){
        cout<<arr[i][rc]<<" ";
    }
    rc--;
}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[4][4] = {{1, 7, 14, 6},
                     {11, 15, 5, 10},
                     {2, 4, 16, 3},
                     {9, 13, 8, 12}};
    
    //spiral printing clockwise
    int tr = 0 , br = 3 , lc =0 , rc =3;
    while(tr<br && lc<rc){

        for(int j=lc;j<=rc;j++){
            cout<<arr[tr][j]<<" ";
        }
        
        tr++;

        for(int i=tr;i<=br;i++){
            cout<<arr[i][rc]<<" ";
        }
        
        rc--;

        for(int j=rc;j>=lc;j--){
            cout<<arr[br][j]<<" ";
        }
        
        br--;

        for(int i=br;i>=tr;i--){
            cout<<arr[i][lc]<<" ";
        }
        lc++;
    }

    cout<<"\n";


    SpiralPrintAntiClockwise(arr);
    return 0;
}