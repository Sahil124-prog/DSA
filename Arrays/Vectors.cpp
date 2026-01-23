#include <iostream>
#include<vector>
using namespace std;


int main(){
    
    vector<int>arr={1,2,3,4,5,6};

    cout<<arr.at(1)<<"\n";

    arr.pop_back();

    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}

