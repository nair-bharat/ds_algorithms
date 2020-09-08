#include<iostream>
using namespace std;

void tower_of_hanoi(int n, char source, char dest, char buffer){

    if(n ==1){
        cout<<"moved "<<source<<" -> "<<dest<<endl;
        return;
        
    }

    tower_of_hanoi(n-1, source, buffer, dest);
    cout<<"moved "<<source<<" -> "<<dest<<endl;
    tower_of_hanoi(n-1, buffer, dest, source);
    

    
}
int main(){

    int n;
    cout<<"Enter the total no of disks"<<endl;
    cin>>n;
    tower_of_hanoi(n, 'x', 'y', 'z');
    
    return 0;
}