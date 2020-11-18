#include<iostream>
using namespace std;
#include<string.h>

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	}

};



int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
} 
int main(){


    string s;
    cin>>s;

    string rev_string = s;
    int n = s.length();
    cout<<n<<endl;
    
    for (int i = n; i >= n/2; i--)
    {   
        char temp = rev_string[i];
        rev_string[i] = rev_string[n -i -1];
        rev_string[n -i -1] = temp;
    }

    cout<<rev_string<<endl;
    
    
    return 0;
}