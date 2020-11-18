#include<iostream>
#include<vector>
#include<map>
#include <iterator> 
using namespace std;

int main(){

    int n, input;
    cout<<"Enter the total no of items"<<endl;
    cin>>n;

    vector<int> p, w;
    
    vector<float> p_wratio;
    map<float, int> values;
         
    for (int i = 0; i < n; i++)
    {   
        cout<<"Enter the profit of item "<<(i+1)<<endl;
        cin>>input;
        p.push_back(input); 
        cout<<"Enter the weight of item "<<(i+1)<<endl;
        cin>>input;
        w.push_back(input);
    }

     for (int i = 0; i < n; i++)
    {   
      // p_wratio.push_back((float)p[i]/ w[i]);
       values.insert(pair<float, int>((float)p[i]/w[i], w[i])); 
    }

    for(auto it = values.cbegin(); it != values.cend(); ++it)
{
    std::cout << it->1.6<<< "\n";
}
    
    return 0;
}