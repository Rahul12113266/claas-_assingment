#include<bits/stdc++.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
    int first,second,i;
    if(arr_size<2)
    {
        cout<<"this is invalid";
        return;
    }
    sort(arr,arr+arr_size);
    for(i=arr_size-2;i>=0;i--)
    {
        if(arr[i]!=arr[arr_size-1])
        {
            cout<<"The second largest number is "<<arr[i] <<endl;
              return;
        }
    }
    cout<<"there is no second largest element";
    }





int main()
{
    int arr[]={2,87,998,465,345,754,980,322};
    int n=sizeof(arr)/sizeof(arr[0]);
    print2largest(arr,n);

}