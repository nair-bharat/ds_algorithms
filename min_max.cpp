#include<iostream>
using namespace std;
//#define ll long long int

//finding min and max in an array

/*
Here I have used quicksort for sorting the array
I have taken smaller array so I am using quicksort
TC: O(nlogn)
and to find the min and max after sort can be found in constant time
given array:  {5,7,6,1,3,2,4}
sorted array: {5,1,2,3,4,6,7}
*/
int partition(int a[], int p, int r){

    int x = a[r], temp;
    int i = p -1;

    for (int j = p; j < r; j++)
    {
        if (a[j] <= x)
        {
            i = i +1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    }

        temp = a[i+1];
        a[i+1] = a[r];
        a[r] = temp;



    return i+1;
}

int* quicksort(int a[], int p, int r){


        if(p < r){

            int q = partition(a,p,r);
            quicksort(a,p,q-1);
            quicksort(a,q+1,r);


        }

        return a;
        
    }

int main(){

    int a[] = {5,7,6,1,3,2,4};

    int r = sizeof(a)/ sizeof(a[0]);
    int p = 1;

    int* b = quicksort(a,p,r);

    cout<<"min: "<<b[1]<<" and "<<"max: "<<b[r-1];
    

    return 0;
}