#include<iostream>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;

    while (t--)
    {
        ll n,m, i;
        cin>>n>>m;
        ll a[n], b[m], c[m+n];

        for (i = 0; i < n; i++)
        {   
            cin>>a[i];
            
        }

        for (i = 0; i < m; i++)
        {   
            cin>>b[i];
        }

        if(m < n){

            for (i = 0; i < m; i++)
            {   
                c[i] = b[i];
            }

            ll j = i;

            for (i = 0; i < m; i++)
            {
                if (a[i] != b[i])
                {
                    c[j] = a[i];
                    j++;
                    cout<<a[i]<<endl;
                }
                
            }

            for (i = m; i < n; i++)
            {
                c[j] = a[i];
                j++;
            }
            
            

        }
       
       else
       {
            for (ll i = 0; i < n; i++)
            {
                cin>>a[i];
            }

            ll j = i -1;

            for (i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    c[j] = b[i];
                    j++;
                }
                
            }

            for (i = n; i < m; i++)
            {
                c[j] = b[i];
                j++;
            }



       }


    for (i = 0; i < m; i++)
    {
        cout<<c[i]<<" ";
    }
           

        
    }
    

    return 0;
}