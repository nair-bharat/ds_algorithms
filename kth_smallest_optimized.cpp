#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int

int main(){

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);

        int k;
        cin>>k;

        cout<<a[k-1]<<endl;
        
    }
    
   
    return 0;
}