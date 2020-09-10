#include<iostream>
#include<vector>
using namespace std;

//We will compute the subset sum using dynamic programming

/*
If suppose there is an array given and we have to find out whether the sum of elements is equal to some no then we use it. 
There are 2 approaches either to use brute force or either by using DP
1. using Brute force the time complexity is O(2^n) because each element is having 2 choices and for n elements the probability is 2^n
2. using DP we can reduce it to O(n * w), where w is the weight 

We cab either use row major or column major similar to 0/1 Knapsack or LCS


*/




int main(){

    vector<int> a; 
    int n;

    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;

    for (int i = 0; i < n; i++) 
        a.push_back(i); 

}