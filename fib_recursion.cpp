#include<iostream>
using namespace std;


//reference gfg

int fib(int n){

    if(n == 0){

        return 0;
    }
    else if(n == 1){

        return 1;
    }

    else{

        return fib(n-1) + fib(n-2);
    }

    
}


int main(){

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int result = fib(n);

    cout<<result<<endl;

    return 0;
}