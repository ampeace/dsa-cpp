#include<vector>
#include<iostream>
using namspce std;

class stack{
    public:

    vector<int> v;

    void push(int val){
        v.push(val);
    }

    void pop(int val){
        v.pop(val);
    }

    void top(){
        return v.top(v[v.size]-1);

    }
    bool empty(){
        return v.size()==0;
    }
};                 //done 