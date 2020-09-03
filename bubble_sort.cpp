#include<iostream>
using std::cout;
using std::cin;
using std::endl;


// implemented according to Cormen

void bubble(int a[], int n){

    int swapped;
    for (int i = 0; i < n; i++){
       
        swapped  = 0;

        for (int j = 0; j < n-i-1; j++){
            
            if(a[j] > a[j+1]){

                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                swapped = 1;
            }

            }


            if (swapped == 0){
               
               break;
            
        }
        
   }

    for (int i = 0; i < n; i++)
   {
       cout << a[i];
   }

    
}
int main(){

    //initialization
    int a[20], n;

    cout<< "Enter the limit"<<endl;
    cin>>n;

    //entering the input
    cout<<"Enter the elements of array:"<<endl;
   
    for (int i = 0; i < n; i++){
         cin>>a[i];
    }

    int *p;

   //call
    bubble(a,n);
/*
   for (int i = 0; i < n; i++)
   {
       cout << *(p + i);
   }

   */
   
   return 0;
   

}