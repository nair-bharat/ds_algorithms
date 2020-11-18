#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin>>t;

    while (t--)
    {   
        int n, input, m, min, mini;
        cin>>n;
        
        vector<int> a;

        //cout<<min<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            a.push_back(input);
        }

        sort(a.begin(), a.end());

        cin>>m;

        min = a[n -1];

        /*
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        */

        for (int i = 0; i < n; i++)
        {
            if (i+m -1 > n -1)
            {
                break;
            }
            
            mini = a[i+m -1] - a[i];
            //cout<<a[i+m -1]<<" "<<a[i]<<" "<<mini<<endl;

            if (mini < min) {

                min = mini;
            }
        }
        
        
        cout<<min<<endl;

    }
    
    return 0;
}