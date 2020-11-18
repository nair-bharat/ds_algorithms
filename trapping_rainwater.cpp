#include<iostream>
using namespace std;

int main() {

    int t;
    cin>>t;

    while (t--)
    {   
        int n, max, water_h  = 0, redun = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (max <= arr[i])
            {
                max = arr[i];
                redun = 0;
            }

            else
            {
                water_h = water_h +(max - arr[i]);
                if (arr[i] < arr[i -1])
                {
                    redun = redun + (arr[i-1] - arr[i]);
                }
                else
                {
                    redun = redun + arr[i];
                }
                

                cout<<water_h<<" "<<redun<<endl;
            }
            
            
        }

        cout<<water_h - redun<<endl;
        
        
    }
    
    return 0;
}