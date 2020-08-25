// Insertion sort

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


void insert_sort(int arr[],int n){

    for(int j = 1; j < n; j++){

        int key = arr[j];
        int i = j -1;

        while (i> 0 and arr[i] > key){

            arr[i+1] = arr[i];
            i = i-1;

        }

        arr[i+1] = key;
        
        

    }
    
}
int main(){

    int a[10] = {5,4,3,2,67,78,65,43,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    insert_sort(a,n);
    
}