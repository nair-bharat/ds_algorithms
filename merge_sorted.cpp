// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr1[i] > arr2[j])
                {   
                    int t = arr1[i];
                    arr1[i] = arr2[j];
                    arr2[j] = t;
                }
                
            }
            
        }
        
    for (int i = 1; i < n; i++) 
    {  
        int key = arr2[i];  
        int j = i - 1;  
  
        while (j >= 0 && arr2[j] > key) 
        {  
            arr2[j + 1] = arr2[j];  
            j = j - 1;  
        }  
        arr2[j + 1] = key;  
    }  



        
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  