#include<iostream>
#define ll long long int
using namespace std;
//Move all negative nos to one side of the array (Ref : gfg)
//Here I have used bubble sort logic to sort the array
int main(){


    ll a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

    ll n = sizeof(a) / sizeof(a[0]);
    for (ll i = 0; i < n-1; i++)
    {

        for (ll j = 0; j < n -1; j++)
        {
            if(a[j] > 0 and a[j +1] <0){

                ll temp = a[j];
                a[j] = a[j +1];
                a[j +1] = temp;
            }
        }
        
       
    }

    for (ll i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}