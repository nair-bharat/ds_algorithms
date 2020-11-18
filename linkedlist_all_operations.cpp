#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;

struct node{

    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *start){

    struct node *new_node, *ptr;
    int val;
    
    cout<<"Enter the data"<<endl;
    cin>>val;

    while(val != -1){

        new_node = (struct node*)malloc(sizeof(struct node));
        
        new_node->data = val;
        if (start == NULL){
            
            new_node->next = NULL;
            start = new_node;

        }

        else{

            ptr = start;
            while(ptr->next != NULL){

                ptr = ptr->next;
            }

            ptr-> next = new_node;
            new_node -> next = NULL;

        }

        cout<<"Enter the data"<<endl;
        cin>>val;


    }

   
    return start;    

}


struct node *display(struct node *start){

    struct node *ptr;
    ptr = start;

    while (ptr != NULL){
        
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }

    return start;
    

}

int main(){

    int option;

    do{

        cout<<"1.Create the LL"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter the option"<<endl;
        cin>>option;

        switch(option){

            case 1: start = create_ll(start);
                    break;

            case 2: start = display(start);
                    break;

            default: break;


        }

    }while (option != 3);
   
    
   return 0;
}