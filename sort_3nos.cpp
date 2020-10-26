#include<iostream>
using namespace std;
#include<vector>

//Sort without using any sorting algorithm
//Reference gfg, here I am using simple counting of 0's, 1's and 2's and putting in an array

void sort(int a[], int n){

    int flag_0 = 0, flag_1 = 0, flag_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0){

            flag_0++;
        }

        else if(a[i] == 1)
        {
            flag_1++;
        }

        else
        {
            flag_2++;
        }
        
        
    }    

    int i =0;

    while (flag_0 != 0)
    {
        a[i] = 0; 
        i++;
        flag_0--;  
    }

    while (flag_1 != 0)
    {
        a[i] = 1;
        i++; 
        flag_1--;  
    }

    while (flag_2 != 0)
    {
        a[i] = 2;
        i++; 
        flag_2--;  
    }
        


    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    

}
int main(){

    int t, n;
    cin>>t;
    while(t--){

        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        sort(a,n);

    }
    


    
    return 0;
}