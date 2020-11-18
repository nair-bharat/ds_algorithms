#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        /*
        int n = s.size();
        for (int i = n; i >= n /2; i--)
        {
            char temp = s[i];
            s[i] = s[n -i -1];
            s[n -i -1] = temp;

        }

        for (int i = 0; i < n; i++)
        {
            cout<<s[i];
        }

        */

       int i = 0;
       int j = s.size() -1;

       swap
        
        
    }
};


int main() {


    Solution sol;

    vector<char> s;
    int n;
    cin>>n;
    char input;

    for (int i = 0; i < n; i++)
    {
        cin>>input;
        s.push_back(input);
    }
    
    sol.reverseString(s);

    return 0;
}


