#include<iostream>
using namespace std;
#include<vector>

int main(){

    int m, n, key, i, j, flag = 0;
    cin>>m>>n;
    cin>>key;
    //vector<vector<int>> matrix;
    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
            
        }
        
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