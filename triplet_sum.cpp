#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

//Reference gfg
/*
Here the approach is to solve the sum by: 
method 1: iterate through all the arrays and finding the sum using i, j and k counters but it is an overhead approach where TC is O(n^3)
method 2: fix an index k to start of index and iterate after each while condition,index i is fixed from k+ 1 and j is n -1
and TC using this approach is O(n^2)
*/
int main(){

    int t;
    cin>>t;

    while (t--)
    {   
        int input, n, x, flag = 0;
        vector<int> arr;
        cin>>n>>x;
        for (int i = 0; i < n; i++)
        {
            cin>>input;
            arr.push_back(input);
        }

        sort(arr.begin(), arr.end());


        for (int k = 0; k < n-2; k++)
        {
            int sum = arr[k];
            int i = k +1, j = n-1;
            while (i < j)
            {
                sum = sum + arr[i] + arr[j];
                //cout<<sum<<" ";

                if (sum < x)
                {
                    i++;
                    sum = arr[k];

                }

                else if (sum > x)
                {
                    j--;
                    sum = arr[k];
                }

                else
                {
                    flag =1;
                    break;
                }
                
                
            
            }
        }

        cout<<flag<<endl;
        
        
        
        
        
        
    }
    
    

    return 0;
}

/*
Output

2 
5 10
1 2 4 3 5
1
6 13
1 4 45 6 10 8
1
*/