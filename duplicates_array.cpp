#include<iostream>
using namespace std;
#define ll long long int
#include<math.h>
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (ll i = 0; i < n; i++) 
    { 
        if (a[abs(a[i])] >= 0) {

            cout<<a[[a[i]]]<<endl;
            a[abs(a[i])] = a[abs(a[i])] * -1; 
        }
           
        else{

            cout << abs(a[i]) << " "; 
        }
            
} 

    
    
    
    return 0;
}