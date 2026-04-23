//Problem Statement:
//Store integer keys in a hash table of sixe n using the hash fuction h(key)=key % n. If a collision occurs , resolve it using linear probing by checking the next available slot. Insert given keys into the table accordingly. Finally, display the hash table with index and values (or "Empty" for vacant slots).

#include<iostream>
using namespace std;

const int n = 10;//Size of the hash table
int hashtable[n];
void insert(int key){
    int index = key % n; //calulate hash index
    while (hashtable[index]!=10){
        index=(index+1)%n;//linear probing to find the next available slot

    }
    hashtable[index]=key;//insert the key into the hash table
}
void dispaly(){
    cout<<"Index\tValue"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"\t";
        if(hashtable[i]==10){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<hashtable[i]<<endl;
        
        }

        }

    }
    int main(){
        //intialize hash table with 10 to indicate empty slots
        for(int i=0;i<n;i++){
            hashtable[i]=10;
        }
        //insert keys into the hash table
        insert(15);
        insert(25);
        insert(35);
        insert(45);
        insert(55);
        insert(65);
        //display the hash table
        dispaly();  

    }
