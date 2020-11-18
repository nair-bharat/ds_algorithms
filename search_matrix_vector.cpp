#include<iostream>
using namespace std;
#include<vector>

int main(){

    int m, n, key, i, j, flag = 0, input;
    cin>>m>>n;
    cin>>key;
    vector<vector<int>> matrix;
    vector<int> row;
   // int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>input;
            row.push_back(input);
            
        }

        matrix.push_back(row);
        
    }

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
    
    
    
    return 0;
}