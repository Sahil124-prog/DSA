#include <bits/stdc++.h>
using namespace std;


int main(){
    
    string s = "abc", t = "ahbgdc";
    int n = t.length();
    int m = s.length();
    int i = 0;
    int j = 0;
    // int count = 0;
    while (i < n)
    {
        if (t[i] == s[j])
        {
            j++;
        }
        i++;
    }
    return j==m;
}