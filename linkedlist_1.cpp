#include<iostream>
using namespace std;

//reference geekforgeeks
class Node{

    public:
        int data;
        Node *next;
};


int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 2;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    Node* ptr = head;

    //traversing the LL
    while(ptr != NULL){

        cout<<ptr->data<<endl;
        ptr = ptr->next;

    }
    return 0;
}