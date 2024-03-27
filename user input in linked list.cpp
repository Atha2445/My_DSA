#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
// void insertEnd(Node*& head, int data) {
//     Node* newNode = new Node(data);
//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

int main(){
     Node* head = nullptr;

    int num_elements, data;
    
    //cout << "Enter the number of elements: ";
    cin >> num_elements;

    //cout << "Enter the elements:\n";
    for (int i = 0; i < num_elements; i++) {
        cin >> data;
        Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        }
    }
     Node* current =head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    return 0;
}
