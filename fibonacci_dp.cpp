#include<iostream>
using namespace std;

//Dynamic programming 

//Using naive recursive approach is easy 
//but suppose fib(6) is to be computed then 
/*
fib(6) = fib(5) + fib(4)

fib(5) = fib(4) + fib(3)
fib(4) = fib(3) + fib(2)

here fib(3) is repeated in each function calls
so here we are computing the repeated values in each calls which can be somewhat optimized
so the solution is using DP
*/

int fib(int n){

    if(n <= 0){

        return n;
    }
    int table[n];

    //we are maintaining a table to store the values 
    //of the fibonacci
    table[0] = table[1] = 1;
    for(int i = 2; i < n; i++){

        table[i] = table[i-1] + table[i-2];
    }

    return table[n-1];


    
}


int main(){

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int result = fib(n);

    cout<<result<<endl;

    return 0;
}