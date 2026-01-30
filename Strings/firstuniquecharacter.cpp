#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string  s = "leetcode";
    vector<int> freq(26, 0);
    for (auto i : s)
    {
        freq[i - 'a']++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i] - 'a'] == 1)
        {
            cout<<i<<" ";
        }
    }
    cout<<-1<<" ";

    return 0;
}