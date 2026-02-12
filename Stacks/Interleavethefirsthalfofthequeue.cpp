#include<bits/stdc++.h>
using namespace std;
int main(){
        // code here
        stack<int> st;
        queue<int>q;
        int halfSize = q.size() / 2;

        // push first half elements into the stack
        // queue : 16 17 18 19 20 || stack : 15 14 13 12 11

        for (int i = 0; i < halfSize; i++)
        {
            st.push(q.front());
            q.pop();
        }

        // enqueue back the stack elements
        // queue: 16 17 18 19 20 15 14 13 12 11
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }

        // dequeue the first half elements of queue and enqueue them back
        // queue : 15 14 13 12 11 16 17 18 19 20
        for (int i = 0; i < halfSize; i++)
        {
            q.push(q.front());
            q.pop();
        }

        // again push the first half elements in the stack
        // queue : 16 17 18 19 20 || stack : 11 12 13 14 15
        for (int i = 0; i < halfSize; i++)
        {
            st.push(q.front());
            q.pop();
        }

        // interleave the elements of queue and stack
        // queue 11 16 12 17 13 18 14 19 15 20
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    return 0;
}
