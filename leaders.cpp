/*
#include<iostream>
using namespace std;

int main() {

    int n, i ,j, k;
    cin>>n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    j = 0;
    while (j < n)
    {
        int max = a[j];
        
        for (i = j; i < n; i++)
        {
            if (max < a[i])
            {
                max = a[i];
                k = i;
            }
            
        }
        cout<<max<<endl;
        k++;
        j =k;
        
        
    }
    
    
    return 0;
}
*/


// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){
    
    // Your code here
    
    /******************
     * You just need to complete this
     * function and return the vector
     * containing the leaders.
     * ***************/
     
    int i, j = 0;
    vector<int> leaders;
    while (j < n)
    {
        int max = arr[j];
        
        for (i = j; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                //cout<<max<<" ";
                j = i++;
                
            }
            
        }
        
        leaders.push_back(max);
        
        
        
    }
    
    return leaders;
     
    
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends