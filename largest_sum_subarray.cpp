#include<iostream>
using namespace std;
#define ll long long int
//Kandane's Algorithm

ll kandane(ll a[], ll n){

    ll sum = 0, max_sum = 0;
    
    for (ll i = 0; i < n; i++)
    {
        sum = sum + a[i];

        if (max_sum < sum)
        {
            max_sum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
        
        
    }
    

    return max_sum;
}
int main(){

    
    ll t;
    cin>>t;
    while (t--){
        
     
    ll n;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    ll largest_sum = kandane(a,n);

    cout<<largest_sum<<endl; 
    
    }
    

    return 0;

}