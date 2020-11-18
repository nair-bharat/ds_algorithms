#include<iostream>
#include<vector>
using namespace std;

void gray_code(vector<string> a, int n){

    if(n == 0){
        for (int i = 0; i < a.size(); i++)
        {
            cout<<a[i]<<endl;
        }
    }
    else {
        vector<string> a1;
        vector<string> a2;

        for (int i = 0; i < a.size(); i++){

            a1.push_back("0" + a[i]);
            a2.push_back(a[i] + "1");
        }

        vector<string> gray;


        for (int i = 0; i < a.size(); i++){

            gray[i] = a1[i] + a2[i];

        }

         for (int i = 0; i < a.size(); i++){

            cout<<gray[i]<<endl;

        }
        
       
    }
       
}

int main(){

    int n;
    vector<string> a; 
  
    a.push_back("0"); 
    a.push_back("1"); 
    cout<<"Enter n"<<endl;
    cin>>n;

    gray_code(a, n -1);
    return 0;
}