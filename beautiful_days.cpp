#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;

int main(){


    ll i, j, k, count = 0;
    cin>>i>>j>>k;


    for (ll p = i; p <= j; p++)
    {   
        ll m = p;
        ll no = m;
        ll rev = 0, n;
        while (m > 0){


            n = m %10;
            rev = rev *10 + n;
            m = m /10;
        }
            

        ll diff = abs(rev -no) %k;

        if (diff == 0)
        {
            count++;
        }
        
        

    }

    cout<<count<<endl;
    

    return 0;
}