#include<iostream>
using namespace std;

int main(){

    int t, m , n, k = 0, l = 0;
    cin>>t>>m>>n;
    int a[m][n];

    while (t--)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        
        }

    /*
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j];
            }
        
        }

    */

        while (k <m and l <n)
        {
            for (int  i = 0; i < n; i++)
            {
                cout<<a[k][l];
            }

            k++;
            
        }
        
    }
    
    
    
    return 0;
}