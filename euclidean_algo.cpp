#include<iostream>
using namespace std;

//This algorithm is finding the greatest common divisor between the two nos
/*
if n1 and n2 are to be computed
There are 2 approaches:
: either to subtract 
n2 from n1 (if n2 smaller than n1 or viceversa)

: to divide as shown in the problem
*/

//gfg was used as a reference 
int euclidean(int a, int b){

    //This condition is for sorting purpose and making b always less than a to prevent the segnmentaion fault
    if(a < b){

        int temp;
        temp = a;
        a = b;
        b = temp;

    }
    while (a % b != 0)
    {
       return euclidean(a%b, b);
    }
    


    return b; 
}
int main(){

    int a,b;

    cout<<"Enter the two nos:"<<endl;
    cin>>a>>b;

    int gcd = euclidean(a,b);
    cout<<gcd<<endl;
    
    return 0;
}

//Output 

/*
Enter the two nos:
31 2
1
Enter the two nos:
25 5
5
*/