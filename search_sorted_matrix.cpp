#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target, int m, int n) {

       cout<<"Inside the object fn"<<endl;
           
    }
};

int main(){

    int m, n, key, i, j, flag = 0, input;
    cin>>m>>n;
    cin>>key;
    vector<vector<int>> matrix;
    vector<int> row;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>input;
            row.push_back(input);
            
        }

        matrix.push_back(row);
        
    }

    Solution s;
    s.searchMatrix(matrix, key, m, n);








    /*    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            
            if (matrix[i][j] == key)
            {
                flag = 1;
                break;
            }
            
            
        }
        
    }

    if (flag)
    {
        cout<<"["<<i<<","<<j<<"]"<<endl;
    }

    else
    {
        cout<<"not found"<<endl;
    }
    
    */
    
    return 0;
}