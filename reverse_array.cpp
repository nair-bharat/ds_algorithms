#include<iostream>
using namespace std;
#define ll long long int

int main(){

    //ll a[] = {4,5,1,2};
    ll  a[] = {1, 2, 3};
    ll n = sizeof(a) /sizeof(a[0]);

    for (ll i = n -1; i >= n/2; i--)
    {
        ll temp = a[i];
        a[i] = a[(n -1) -i];
        a[(n -1) -i] = temp;
        //cout<<a[i]<<endl;
    }

    for (ll i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}