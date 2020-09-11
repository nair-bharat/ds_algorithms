#include<iostream>
#include<vector>
using namespace std;

//We will compute the subset sum using dynamic programming

/*
If suppose there is an array given and we have to find out whether the sum of elements is equal to some no then we use it. 
There are 2 approaches either to use brute force or either by using DP
1. using Brute force the time complexity is O(2^n) because each element is having 2 choices and for n elements the probability is 2^n
2. using DP we can reduce it to O(n * w), where w is the weight 

We can either use row major or column major similar to 0/1 Knapsack or LCS


*/

void subset_sum(int arr[], int n, int s){

int array[4] = {6,3,2,1};
for (int i = 0; i < n; i++){
       /* code */
       cout<<arr[i];
   }

    bool ss[n+1][s+1];
    //This is actually the base condition, because if s is 0 then we can get the subset sum as zero by not picking any element
    //This is one of the interesting case which we often tend to forget it 

    for (int i = 0; i <= n; i++){
        
        for(int j =0; j<= s; j ++){

            ss[i][j] = false; //initializing the value to false

        }
        
    }

    //Initialize the 0th column to 0
    
    for (int i = 0; i < 1; i++)
    {
     
        for(int j =0; j<= s; j ++){

           ss[i][j] = false;

        }
        
    }

    //Initilaize the 0th row to 0
    for (int i = 0; i <= n; i++)
    {
     
        for(int j =0; j<1; j ++){

           ss[i][j] = true;

        }
        
    }


    for (int i = 0; i <= n; i++)
    {
     
        for(int j =0; j<=s; j ++){

          cout<<ss[i][j]+'\t'<<endl;

        }

        cout<<'\n';
        
    }
    
  
     for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j <= s; j++){
              
              if(s < array[i]){

                  ss[i][j] = ss[i-1][j];

              }

              if(s > array[i]){

                  ss[i][j] = ss[i-1][j] or ss[i-1][j];

              }
        }
      
     }
     





}



int main(){

    vector<int> a; 
    int n,s;

    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;


    /*
    for (int i = 0; i < n; i++)  //Once familiar with STL planning to use it
        a.push_back(i); 

    */

   for (int i = 1; i < n+1; i++){
       /* code */
       cin>>arr[i];
   }

   for (int i = 1; i < n+1; i++){
       /* code */
       cout<<arr[i];
   }

   cout<<"Enter the no to find subset sum"<<endl;
   cin>>s;


    subset_sum(arr,n,s);
    //cout<<val<<endl;

   
    return 0;
}