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

struct node *insert_before(struct node *start) {

    struct node *new_node, *ptr, *preptr;
    new_node = (struct node*)malloc(sizeof(struct node));
    int num, val;
    cout<<"Enter node to be inserted"<<endl;
    cin>>num;

    cout<<"Enter node value before which num has to be inserted"<<endl;
    cin>>val;


    new_node -> data = num;
    ptr = start;
    while (ptr -> data != val)
    {   
        preptr = ptr;
        ptr = ptr -> next;
    }
    

    preptr -> next = new_node;
    new_node -> next = ptr;

    return start;

}



struct node *insert_after(struct node *start) {

    struct node *new_node, *ptr;
    new_node = (struct node*)malloc(sizeof(struct node));
    int num, val;
    cout<<"Enter node to be inserted"<<endl;
    cin>>num;

    cout<<"Enter node value before which num has to be inserted"<<endl;
    cin>>val;


    new_node -> data = num;
    ptr = start;
    while (ptr -> data != val)
    {   
        ptr = ptr -> next;
    }
    new_node -> next = ptr -> next;
    ptr -> next = new_node;

    return start;

}

struct node *delete_beg(struct node *start) {


    start = start -> next;
    
    return start;
}

struct node *delete_end(struct node *start) {

    struct node *ptr, *preptr;
    ptr = start;

    while (ptr -> next != NULL)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }

    preptr -> next = NULL;
    free(ptr);

    return start;
    
}

struct node *delete_node(struct node *start) {

    int num;
    struct node *ptr, *preptr;
    ptr = start;
    cout<<"Enter the node"<<endl;
    cin>>num;

    while (ptr -> data != num)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }

    preptr -> next = ptr -> next;
    free(ptr);
    
    return start;
}

struct node *delete_after(struct node *start) {


    int num;
    struct node *ptr, *postptr;
    ptr = start;
    postptr = ptr;

    cout<<"enter a node value after which a node is to be deleted"<<endl;
    cin>>num;

    while (ptr -> data != num)
    {
        ptr = postptr;
        postptr = postptr -> next;
    
    }

    ptr -> next = postptr -> next;
    free(postptr);
    
    return start;
}

struct node *delete_list(struct node *start) {

    //remaining

    return start;

}

struct node *sort_list(struct node *start) {

    
    return start;
}


int main() {


    int option;
    do {

        cout<<"1. Create List \n2. Display List \n3. Add node at the beginning \n4. Add node at the end \n5. Add node before a given node \n6. Add node after a given node"<<endl;
        cout<<"7. Delete node from the beginning \n8. Delete node from the end \n9. Delete a node \n10. Delete node after a given node"<<endl;
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

        case 5: start = insert_before(start); 
            break;

        case 6: start = insert_after(start);
            break;

        case 7: start = delete_beg(start);
            break;

        case 8: start = delete_end(start);
            break;

        case 9: start = delete_node(start);
            break;

        case 10: start = delete_after(start);
            break;

        case 11: start = delete_list(start);
            break;

        case 12: start = sort_list(start);
            break;
        
        default:
            break;
    }

    } while (option != 13);
    
    return 0;
}