#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "Hello";
    int  left = 0;
    int right = s.length()-1;
    while(left<=right){
        swap(s[left++],s[right--]);
        
    }
    cout<<s<<" ";
    return 0;
}