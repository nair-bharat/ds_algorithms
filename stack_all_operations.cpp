#include<iostream>
using namespace std;

#define MAX 3
int stack[MAX], top = -1;

void push(int *stack, int value){

    if(top == MAX-1){

        cout<<"STACK OVERFLOW"<<endl;
    }

    else
    {
        stack[++top] = value;

    }
    

}

int pop(int stack[]){

    if(top == -1){

        cout<<"STACK UNDERFLOW"<<endl;
        return -1;
    }

    else
    {
        int val = stack[top--];
        return val;
    }
    
}

int peek(int stack[]){

    if(top == -1){

        cout<<"STACK UNDERFLOW"<<endl;
        return -1;

    }

    else{

        int val = stack[top];
        return val;
        
    }
}
void display(int stack[]){


    for(int i = top; i>=0; i--){

        cout<<stack[i]+"\t"<<endl;
    }
}

int main(){


    int option, value, val;

    cout<<"-------STACK IMPLEMENTATION--------"<<endl;
    
    do {

        cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT"<<endl;
        cin>>option;

        switch (option)
        {
            case 1: cout<<"Enter the value to be entered in stack"<<endl;
                    cin>>value;
                    push(stack, value);
                    break;

            case 2: val = pop(stack);
                    if(val != -1)   
                        cout<<val+" is popped"<<endl;
                    break;
            
            case 3: display(stack);
                    break;

            case 4: val = peek(stack);
                    if(val != -1)   
                        cout<<val+" is peek value"<<endl;
                    break;
        
        }

    } while(option != 5);

    return 0;
}