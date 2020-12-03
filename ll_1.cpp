#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *start) {
    
    struct node *new_node, *ptr;
    
    int num;
    cout<<"enter any no"<<endl;
    cin>>num;
    while (num != -1) {
        
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data = num;

        if (start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        
        else
        {
            ptr = start;
            while (ptr -> next != NULL)
            {
                ptr = ptr -> next;
            }
            
            ptr -> next = new_node;
            new_node -> next = NULL;

        }
        
        cout<<"enter any no"<<endl;
        cin>>num;
    }

    

    return start;
}

void display(struct node *start) {

    struct node *ptr;
    ptr = start;

    while (ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
    cout<<endl;
     

}

struct node *insert_beg(struct node *start) {

    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    int num;
    cout<<"Enter node to be inserted"<<endl;
    cin>>num;

    new_node -> data = num;
    new_node -> next = start;
    start = new_node;

    return start;

}

struct node *insert_end(struct node *start) {

    struct node *new_node, *ptr;
    new_node = (struct node*)malloc(sizeof(struct node));
    int num;
    cout<<"Enter node to be inserted"<<endl;
    cin>>num;

    new_node -> data = num;
    ptr = start;
    while (ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    

    ptr -> next = new_node;
    new_node -> next = NULL;

    return start;

}


int main() {


    int option;
    do {

        cout<<"1. Create List \n2. Display List \n3. Add node at the beginning \n4. Add node at the end \n5. Add node before a given node \n6. Add node after a given node"<<endl;
        cout<<"7. Delete node from the beginning \n8. Delete node from the end \n9. Delete node a node \n10. Delete node after a given node"<<endl;
        cout<<"11. Delete the entire list \n12. Sort the list \n13. Exit"<<endl;
        cout<<"Enter your option"<<endl;
        cin>>option;

        switch (option)
        {
        case 1: start = create_ll(start);
                cout<<"LL created"<<endl;
            break;

        case 2: display(start); 
            break;

        case 3: start = insert_beg(start); 
            break;

        case 4: start = insert_end(start); 
            break;
        
        default:
            break;
    }

    } while (option != 13);
    
    return 0;
}