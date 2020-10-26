#include<iostream>
using namespace std;
#define ll long long int

int* insertion(int a[], int n){

    int key, i;
    for (int j = 2; j <= n; j++)
    {
        key = a[j];
        i = j -1;
        while (i> 0 and a[i]> key)
        {
            a[i +1] = a[i];
            i = i -1;
            a[i +1] = key;
        }
        

    }
    

    return a;
}

int main(){

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        
        int *arr = insertion(a,n);

        int k;
        cin>>k;

        cout<<a[k]<<endl;
        
    }
    
   
    return 0;
}