// { Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends



class Solution{
public:
    int nextHappy(int N){
        // code here
        static int count = 1;

        if (count == 1)
        {
            
        }
        
        int sum = 0, digit;
        while (N > 0) {

            digit = N % 10;
            sum = sum + digit * digit;
            N = N /10;
    
        }
        
        while (sum != 1 && sum != 4) {
            
            return nextHappy(sum);
        }
        
        if (sum == 1){
            
            return sum;
        }
        
        return 0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int N;
    cin>>N;
    while(N++)
    {
        //int N;
        //cin>>N;
        Solution ob;
        int val = ob.nextHappy(N);
        
        if (val)
        {
            cout<<N<<endl;
            break;
        }
        
    }
    return 0; 
}  // } Driver Code Ends