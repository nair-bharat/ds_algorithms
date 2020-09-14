#include<iostream>
using namespace std;
#include<vector>

//it is solved using greedy approach
/*

suppose we go to a stop and we buys items of Rs 91
we are having notes of various denominations
such as 1,2,5,10,20,50,100,500,1000

so how we will give the money to shoopkeeper
89 = 50 + 20 + 10 + 9
so this algorithm will compute the denominations required

*/
void coins_greedy(int *a, int deno){

    int coins_change;
    vector<int> coins;

    int n = sizeof(a);
     for (int i = n-1; i>=0 ; i--){
       
        if(deno >= a[i]){

            deno = deno - a[i];
            coins.push_back(a[i]);
            

       }

   }

   for (auto i = coins.begin(); i!= coins.end(); i++){

        cout<<*i<<endl;
    }



   
}
int main(){

    
    int j, deno;

    int a[] = {1,2,5,10,20,50,100,500,1000};
    cout<<"Enter the denomination"<<endl;
    cin>>deno;

    coins_greedy(a, deno);


    return 0;
}