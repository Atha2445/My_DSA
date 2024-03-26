#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next = nullptr;
    }
};

int main(){
    Node* head= new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    head->next=second;
    second->next=third;
    
    //Traversing and printing the list
    Node* current =head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
}
