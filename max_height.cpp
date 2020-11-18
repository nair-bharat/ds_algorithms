#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int k, n;
    cin>>k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr +n);

    int height_diff = arr[n -1] -arr[0];
    cout<<height_diff<<endl;

    int upperlimit = arr[n -1] - k;
    int lowerlimit = arr[0] + k;

    cout<<upperlimit - lowerlimit<<endl;

    if (height_diff < (upperlimit -lowerlimit))
    {
        cout<<height_diff<<endl;
    }

    else
    {
        cout<<upperlimit -lowerlimit<<endl;
    }
    
    

    
    return 0;
}