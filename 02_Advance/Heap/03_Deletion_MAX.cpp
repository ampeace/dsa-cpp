// MAX-HEAP Imlementation showing Deletion
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;
    int n,x;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elemens: \n";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<"Heap elements (largest to smallest): \n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}