#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {

        int n, x;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        x = a[n-1];

        for (int i = n-1; i >= 0; i--)
        {
            a[i] = a[i -1];
        }
        
        a[0] = x;

        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<"\n";

    }
    

    return 0;
}