#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "the sky is blue";
    stack<string>st;
    int n = s.length();
    int i=0;
    string newWord = "";
    while(i<n){
        if(s[i]==' '){
            //newWord+=s[i];
            if(!newWord.empty()){
                st.push(newWord);
                newWord = "";
            } 
        }
        else{
            newWord += s[i];
        }
        
        i++;
    }
    //now when i goes at last we will push the last word 
    if (!newWord.empty())
    {
        st.push(newWord);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}