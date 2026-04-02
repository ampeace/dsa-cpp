// MIN-HEAP Implementation
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>>pq; //min-heap
    int n , x;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i =0; i<n;i++){
        cin>>x;
        pq.push(x);
    }
    cout<<"Heap elements (smallest to largest):\n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}