#include<iostream>
using namespace std;

int main(){

    int steps, hike = 0, valley = 0;
    cin>>steps;
    char path[steps];
    
    for (int i = 0; i < steps; i++)
    {
        cin>>path[i];
    }
    


    for (int i = 0; i < steps; i++)
    {
        //cout<<path[i];
        if (path[i] == 'U')
        {
            hike = hike +1;
            //cout<<hike;

        }
        
        else
        {
            hike = hike -1;
            //cout<<hike;

        }

        if (hike == 0)
        {
            valley = valley + 1;
        }
        
        
    }

    cout<<valley /2<<endl;
    
    
    return 0;
}