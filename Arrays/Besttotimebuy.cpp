#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr={2,4,1};
int n = arr.size();
int i = 0;
int j = n - 1;
int profit = 0;
while (i < j)
{
    if (arr[j] - arr[i] <= 0 || arr[i + 1] < arr[i])
    {
        i++;
    }
    if (arr[j - 1] > arr[j]){
        j--;
    }
    else if (arr[j] - arr[i] > 0)
    {
        profit = max(profit, arr[j] - arr[i]);
        j--;
    }
}
cout<< profit<< "" ;
}