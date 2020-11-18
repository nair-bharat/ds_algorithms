#include<iostream>
#include<string>
using namespace std;

//reference gfg and cs dojo
void powerset(string str, int index){

    string curr;
    for (int i = index; i < str.size(); i++)
    {
        curr = curr + str[i];
        cout<<curr<<endl;

    }
    if(index < str.size()){

        powerset(str, index+1);
    
    }

    

}
int main(){

    //recursive to generate a powerset
    string str;
    int index = 0;

    cout<<"enter string"<<endl;
    cin>>str;
    //for the empty string
    cout<<" "<<endl;
    powerset(str, index);
    return 0;
}