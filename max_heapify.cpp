#include<iostream>
using namespace std;

//just logic, coderequires some modifications
void max_heapify(int *a, int i){

    int largest;
    int l, r;
    l = 2 *i;
    r = 2*(i+1);

    int heap_size = sizeof(a)/ sizeof(a[0]);
    if(l <= heap_size and a[l] > a[i]){

        largest = l;
    }
    else{

        largest = i;
    }

   if(r <= heap_size and a[r] > a[largest]){

        largest = r;
    }

    if(largest != i){

        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        max_heapify(a, largest);
    }

    for (int i = 0; i < heap_size; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    
}
int main(){

    //max heapify algorithm
    int i = 0;
    int a[] = {9,6,5,0,8,2,7,1,3};

    max_heapify(a,i);
    return 0;
}