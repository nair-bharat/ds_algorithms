// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    int max = 1, max_product = 1, buffer = 1 ;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0){


                if(buffer < max_product){

                   // cout<<max_product<<" "<<buffer<<endl;
                    buffer = max_product;
                }
                

    

                max = 1, max_product = 1;
               // cout<<arr[i]<<" ";
            }

            else
            {   
                //cout<<"it"<<endl;
                max = max * arr[i];
                cout<<max<<endl;
                if(max_product < max){

                    max_product = max;
                    cout<<max_product<<endl;
                }
            }
            
            
        }

        if(arr[0] < 0){

            max_product = max/ arr[0];
        }
        buffer = (buffer > max_product) ? buffer: max_product;
    
        //cout<<buffer<<endl;
        return buffer;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends