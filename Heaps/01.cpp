#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class MaxHeap
{
public:
    vector<int> heap;
    void buubleUp(int index)
    {
        // find the parent
        int parent = (index - 1) / 2;
        while (index > 0)
        {
            // if curr node > than parent
            if (heap[index] > heap[parent])
            {
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }

    void insert(int value){
        //this is like bottom up
        heap.push_back(value);
        buubleUp(heap.size()-1);   //the index of the value
    }

    void bubbleDown(){
        //this is top down -> also deletion
        int i = 0;
        int size = heap.size();
        while(i<size){
            int left = 2*i+1;
            int right = 2*i+2;
            int largest = i;
            if(left<size && heap[left]>heap[largest]){
                largest = left;
            }
            if(right<size && heap[right]>heap[largest]){
                largest=right;
            }
            if(largest!=i){
                swap(heap[i],heap[largest]);
                i=largest;  //after swapping now are index will be on our new largest which either have left or right pointer
            }
            else{
                break;
            }
        }
    }
    void deletion(){
        int idx = heap.size()-1;
        swap(heap[0],heap[idx]);
        bubbleDown();
    }
};
int main()
{

    return 0;
}