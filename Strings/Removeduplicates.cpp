#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<bool>arr(26,false);
    string s = "banana";
    string ans = "";
    // for(int i=0;i<s.length();i++){
    //     int idx = s[i]-'a';
    //     if(arr[idx]==0){
    //         arr[idx]=1;
    //     }
    // }
    // int n = arr.size();
    
    // for(int i=0;i<n;i++){
    //     if(arr[i]==1){
    //         ans+= char(i+'a');
    //     }
    // }

    for(int c : s){
        int idx = c - 'a';
        if(!arr[idx]){
            arr[idx]=true;
            ans+=c;
        }
    }
    cout<<ans<<" ";
    return 0;
}

