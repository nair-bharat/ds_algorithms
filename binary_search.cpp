#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int binary_search(int a[],int p, int r, int key){
if (r >= p)
    {

        int q = p + (r-p)/2;
        if (key < a[q])
        
        {
           r = q - 1;
           return binary_search(a,p,r,key);
        }

         if (key > a[q])
        
        {
           p = q + 1;
           return binary_search(a,p,r,key);
        }

        else
        {
            return q;
        }
        


         
    }

    return -1;
    
}
int main(){


    int a[100], n, key;
    int p, q, r;

    cout<<"Enter the elements of n"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the key value"<<endl;
    cin>>key;

    p = 0;
    r = n-1;
    q = p + (r-1)/2;

    int s = binary_search(a,p,r,key);
    if (s == -1){
         cout<<"key not found"<<endl;
       
    }

    else
    {
        cout<<"search found"<<endl;
    }
    
    
    return 0;
}