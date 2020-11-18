#include<iostream>
using namespace std;

//By Using Kandane Logic, the implementation was easy
int main(){

    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    int max = 1, max_product = 1;

    for (int i = 0; i < n; i++)
    {
        int max = 1, max_product = 1;
        
        max = max * a[i];

        if (max_product < max)
        {
            max_product = max;
        }

        if (max < 0)
        {
            max = 0;
        }
        
        
    }
    
   
   cout<<max_product<<endl;
    

    return 0;

}